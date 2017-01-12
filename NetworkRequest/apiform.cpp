#include "apiform.h"
#include "ui_apiform.h"
#include <iostream>
#include "QDebug"

using namespace std;

ApiForm::ApiForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApiForm)
{
    ui->setupUi(this);
}

ApiForm::~ApiForm()
{
    delete ui;
}

void ApiForm::createUser()
{
    // Setup the REST url
    QUrl serviceUrl = QUrl("http://localhost:8080/RestApp/rest/user/add");
    QByteArray postData;

    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy",""); //bypass error described in Issue#1
    query.addQueryItem("name",ui->createUser_username->text());
    query.addQueryItem("password",ui->createUser_password->text());

    params.setQuery(query);

    postData = params.toEncoded(QUrl::RemoveFragment);

    // Call the webservice
    QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            SLOT(onPostFinished(QNetworkReply*)));


    QNetworkRequest networkRequest(serviceUrl);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");


    networkManager->post(networkRequest,postData);
}

void ApiForm::onPostFinished(QNetworkReply *reply)
{
    ui->createUser_output->setText(reply->readAll());
}

void ApiForm::on_createUser_clicked()
{
    createUser();
}
