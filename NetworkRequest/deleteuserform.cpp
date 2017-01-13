#include "deleteuserform.h"

DeleteUserForm::DeleteUserForm(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = "http://localhost:8080/RestApp/rest/user/delete";

    //listen for the request to finish and call the SLOT
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void DeleteUserForm::deleteUser()
{
    //setup form data
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("name", username);

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(api);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST delete user service
    networkManager->post(networkRequest,postData);
}

void DeleteUserForm::responseReady(QNetworkReply *reply)
{
    QByteArray response;
    response = reply->readAll();
    emit(userDeleted(response));
}


QString DeleteUserForm::getUsername() const
{
    return username;
}

void DeleteUserForm::setUsername(const QString &value)
{
    username = value;
}

