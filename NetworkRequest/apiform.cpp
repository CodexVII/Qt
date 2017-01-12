#include "apiform.h"
#include "ui_apiform.h"
#include <iostream>

#include <QDebug>
using namespace std;

ApiForm::ApiForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApiForm)
{
    ui->setupUi(this);

//    //setup the network manager
//    networkManager = new QNetworkAccessManager(this);
//    CreateUserRequest createUser;

//    //make the connections
//    connect(networkManager, SIGNAL(finished(QNetworkReply*)),&createUser,
//            SLOT(CreateUserRequest::onRequestFinished(QNetworkReply*)));

    connect(&createUserRequest, SIGNAL(userCreated(QByteArray)),
            this, SLOT(onPostFinished(QByteArray)));
}

ApiForm::~ApiForm()
{
    delete ui;
}

void ApiForm::createUserFunc()
{
//    // Setup the REST url
//    QUrl serviceUrl = QUrl("http://localhost:8080/RestApp/rest/user/add");
//    QByteArray postData;

//    QUrl params;
//    QUrlQuery query;
//    query.addQueryItem("dummy",""); //bypass error described in Issue#1
//    query.addQueryItem("name",ui->createUser_username->text());
//    query.addQueryItem("password",ui->createUser_password->text());

//    params.setQuery(query);

//    postData = params.toEncoded(QUrl::RemoveFragment);

//    // Call the webservice
//    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
//            SLOT(onPostFinished(QNetworkReply*)));


//    QNetworkRequest networkRequest(serviceUrl);
//    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");


//    networkManager->post(networkRequest,postData);
}

void ApiForm::onPostFinished(QByteArray response)
{
    qDebug() << response;
    ui->createUser_output->setText(response);
}

void ApiForm::on_createUser_clicked()
{
    //set form object's required fields
    createUserRequest.setUsername(ui->createUser_username->text());
    createUserRequest.setPassword(ui->createUser_password->text());

    //call function to begin start user creation
    createUserRequest.createUser();
}
