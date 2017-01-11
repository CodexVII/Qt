#ifndef MYNETWORKCLASS_H
#define MYNETWORKCLASS_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class MyNetworkClass : public QObject
{
    Q_OBJECT
public:
    explicit MyNetworkClass(QObject *parent = 0);
    /* makes request to the endpoint */
    void makeRequest(QString);

signals:
    void dataReadyRead(QByteArray);

public slots:
    void readyRead(QNetworkReply *reply);

private:
    QNetworkAccessManager *qnam = new QNetworkAccessManager(this);
};



#endif // MYNETWORKCLASS_H
