#include "mynetworkclass.h"

MyNetworkClass::MyNetworkClass(QObject *parent) : QObject(parent)
{
    /* once instansiated all objects should be connected appropriately
     * to ensure that data transaction will happen as expected
     */
    connect(qnam,SIGNAL(finished(QNetworkReply*)),this,SLOT(readyRead(QNetworkReply*)));
}

/* Makes request to the endpoint */
void MyNetworkClass::makeRequest(QString endpointRequest)
{
    qnam->get(QNetworkRequest(QUrl(endpointRequest)));
}

/* Once the request is finished this slot will be automatically called
 * Emits another signal (dataReadyRead)
 */

void MyNetworkClass::readyRead(QNetworkReply *reply)
{
    QByteArray myData;
    myData = reply->readAll();
    qDebug() << myData;
    emit(dataReadyRead(myData));
}

