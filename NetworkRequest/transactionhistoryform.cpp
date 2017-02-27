#include "transactionhistoryform.h"

TransactionHistoryForm::TransactionHistoryForm(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = PAYMENT_API;
    api.append("history");

    //listen for request to finish to process the response
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void TransactionHistoryForm::getTransactionHistory()
{
    QUrl target= QUrl(api + "/" + username);

    QNetworkRequest networkRequest(target);

    // make a GET call to the REST service
    networkManager->get(networkRequest);
}

void TransactionHistoryForm::responseReady(QNetworkReply * reply)
{
    QByteArray response;

    // JSON string
    response = reply->readAll();

    // parse into list of objects

    emit(transactionHistoryReceived(response));
}

QString TransactionHistoryForm::getUsername() const
{
    return username;
}

void TransactionHistoryForm::setUsername(const QString &value)
{
    username = value;
}
