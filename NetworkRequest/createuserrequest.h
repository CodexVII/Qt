#ifndef CREATEUSERREQUEST_H
#define CREATEUSERREQUEST_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"

class CreateUserRequest : public QObject
{
    Q_OBJECT
public:
    explicit CreateUserRequest(QObject *parent = 0);

    void createUser();

    QString getRequestResult() const;
    void setRequestResult(const QString &value);

    QString getUsername() const;
    void setUsername(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

signals:
    void userCreated(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    //URL that goes to the REST API
    QString api;

    //contains string response from server
    QString requestResult;

    //contains form data set by main window
    QString username;
    QString password;

    //used to access REST API
    QNetworkAccessManager *networkManager;
};

#endif // CREATEUSERREQUEST_H
