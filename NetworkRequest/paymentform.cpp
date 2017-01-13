#include "paymentform.h"

PaymentForm::PaymentForm(QObject *parent) : QObject(parent)
{
    //REST API connection
    networkManager = new QNetworkAccessManager(this);
    api = "http://localhost:8080/RestApp/rest/user/pay";

    //listen for the request to finish
    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(responseReady(QNetworkReply*)));
}

void PaymentForm::pay()
{
    //setup form data
    QUrl params;
    QUrlQuery query;
    query.addQueryItem("dummy","");
    query.addQueryItem("sender",sender);
    query.addQueryItem("receiver",receiver);
    query.addQueryItem("amount",QString::number(amount));

    params.setQuery(query);

    QByteArray postData = params.toEncoded(QUrl::RemoveFragment);

    //set header to use html FORM format
    QNetworkRequest networkRequest(api);
    networkRequest.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-www-form-urlencoded");

    //make POST call to REST payment service
    networkManager->post(networkRequest,postData);
}

void PaymentForm::responseReady(QNetworkReply *reply)
{
    QByteArray response;
    response = reply->readAll();
    emit(paymentProcessed(response));
}

double PaymentForm::getAmount() const
{
    return amount;
}

void PaymentForm::setAmount(double value)
{
    amount = value;
}

QString PaymentForm::getReceiver() const
{
    return receiver;
}

void PaymentForm::setReceiver(const QString &value)
{
    receiver = value;
}

QString PaymentForm::getSender() const
{
    return sender;
}

void PaymentForm::setSender(const QString &value)
{
    sender = value;
}
