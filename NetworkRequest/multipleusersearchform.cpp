#include "multipleusersearchform.h"

MultipleUserSearchForm::MultipleUserSearchForm(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = "http://localhost:8080/RestApp/rest/user/search";

    //listen for the request to finish
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void MultipleUserSearchForm::searchUsers()
{
    //append search pattern to URL
    QString target = api + "/" + username;

    QNetworkRequest networkRequest(target);

    //call REST service
    networkManager->get(networkRequest);
}

void MultipleUserSearchForm::responseReady(QNetworkReply *reply)
{
    QByteArray response;
    response = reply->readAll();
    emit(searchComplete(response));
}

QString MultipleUserSearchForm::getUsername() const
{
    return username;
}

void MultipleUserSearchForm::setUsername(const QString &value)
{
    username = value;
}

