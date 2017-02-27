#include "getsingleuserform.h"

GetSingleUserForm::GetSingleUserForm(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = USER_API;
    api.append("get");

    //listen for request to finish to process the response
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}


void GetSingleUserForm::getUser()
{
    /*
     * simply a get method
     * so we append the network manager with the target
     * username and see if that works
     */

    QUrl target = QUrl(api + "/" + username);   //append username to URL

    QNetworkRequest networkRequest(target);

    //make a GET call to the REST service
    networkManager->get(networkRequest);
}

void GetSingleUserForm::responseReady(QNetworkReply *reply)
{
    QByteArray response;
    response = reply->readAll();
    emit(userReceived(response));
}

QString GetSingleUserForm::getUsername() const
{
    return username;
}

void GetSingleUserForm::setUsername(const QString &value)
{
    username = value;
}
