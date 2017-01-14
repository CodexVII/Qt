#include "loginform.h"

LoginForm::LoginForm(QObject *parent) : QObject(parent)
{
    networkManager = new QNetworkAccessManager(this);
    api = "http://localhost:8080/RestApp/rest/user/validate";

    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void LoginForm::login()
{
    //setup form
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy",""); //bypass error described in Issue#1
    query.addQueryItem("name", username);
    query.addQueryItem("password",password);

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(api);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST service
    networkManager->post(networkRequest,postData);
}

void LoginForm::responseReady(QNetworkReply *reply)
{

    QByteArray response;
    response = reply->readAll();
    emit(loginComplete(response));
}

QString LoginForm::getPassword() const
{
    return password;
}

void LoginForm::setPassword(const QString &value)
{
    password = value;
}

QString LoginForm::getUsername() const
{
    return username;
}

void LoginForm::setUsername(const QString &value)
{
    username = value;
}
