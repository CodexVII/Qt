#include "createuserrequest.h"

using namespace std;
CreateUserRequest::CreateUserRequest(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = QUrl("http://localhost:8080/RestApp/rest/user/add");

    //connect networkManager to an event for when request is finished
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void CreateUserRequest::createUser()
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

/*
 * Send out for main window to read reply from server
 * to update required elements
 */
void CreateUserRequest::responseReady(QNetworkReply *reply)
{
    QByteArray response;
    response = reply->readAll();

    emit(userCreated(response));
}


void CreateUserRequest::setPassword(const QString &value)
{
    password = value;
}

void CreateUserRequest::setUsername(const QString &value)
{
    username = value;
}

QString CreateUserRequest::getRequestResult() const
{
    return requestResult;
}

void CreateUserRequest::setRequestResult(const QString &value)
{
    requestResult = value;
}
