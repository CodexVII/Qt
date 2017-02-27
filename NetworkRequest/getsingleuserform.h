#ifndef GETSINGLEUSERFORM_H
#define GETSINGLEUSERFORM_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"
#include "network.h"

class GetSingleUserForm : public QObject
{
    Q_OBJECT
public:
    explicit GetSingleUserForm(QObject *parent = 0);
    void getUser();

    QString getUsername() const;
    void setUsername(const QString &value);

signals:
    void userReceived(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    //URL that goes to GetUser service
    QString api;

    //user trying to query. must match name in DB.
    QString username;

    //used to access REST API
    QNetworkAccessManager *networkManager;
};

#endif // GETSINGLEUSERFORM_H
