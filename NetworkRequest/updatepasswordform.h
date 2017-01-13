#ifndef UPDATEPASSWORDFORM_H
#define UPDATEPASSWORDFORM_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"

class UpdatePasswordForm : public QObject
{
    Q_OBJECT
public:
    explicit UpdatePasswordForm(QObject *parent = 0);

    void updatePassword();

    QString getNew_password() const;
    void setNew_password(const QString &value);

    QString getUsername() const;
    void setUsername(const QString &value);

    QString getOld_password() const;
    void setOld_password(const QString &value);

signals:
    void passwordUpdated(QByteArray);

public slots:

    void responseReady(QNetworkReply*);

private:
    //REST url to password update service
    QString api;

    //form data set by main window
    QString username;
    QString old_password;
    QString new_password;

    //used to access REST API
    QNetworkAccessManager *networkManager;
};

#endif // UPDATEPASSWORDFORM_H
