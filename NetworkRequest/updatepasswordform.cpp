#include "updatepasswordform.h"

UpdatePasswordForm::UpdatePasswordForm(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = "http://localhost:8080/RestApp/rest/user/update/password";

    //listen for the request to finish and call the SLOT
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void UpdatePasswordForm::updatePassword()
{
    //setup form
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("name", username);
    query.addQueryItem("old_pwd",old_password);
    query.addQueryItem("new_pwd",new_password);

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(api);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST update password service
    networkManager->post(networkRequest,postData);
}

void UpdatePasswordForm::responseReady(QNetworkReply *reply)
{
    QByteArray response;
    response = reply->readAll();

    emit(passwordUpdated(response));
}

QString UpdatePasswordForm::getNew_password() const
{
    return new_password;
}

void UpdatePasswordForm::setNew_password(const QString &value)
{
    new_password = value;
}

QString UpdatePasswordForm::getUsername() const
{
    return username;
}

void UpdatePasswordForm::setUsername(const QString &value)
{
    username = value;
}

QString UpdatePasswordForm::getOld_password() const
{
    return old_password;
}

void UpdatePasswordForm::setOld_password(const QString &value)
{
    old_password = value;
}
