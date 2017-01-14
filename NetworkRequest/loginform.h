#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"

class LoginForm : public QObject
{
    Q_OBJECT
public:
    explicit LoginForm(QObject *parent = 0);
    void login();

    QString getUsername() const;
    void setUsername(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

signals:
    void loginComplete(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    QString api;

    QString username;
    QString password;

    QNetworkAccessManager *networkManager;
};

#endif // LOGIN_H
