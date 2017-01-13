#ifndef DELETEUSERFORM_H
#define DELETEUSERFORM_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"

class DeleteUserForm : public QObject
{
    Q_OBJECT
public:
    explicit DeleteUserForm(QObject *parent = 0);
    void deleteUser();

    QString getUsername() const;
    void setUsername(const QString &value);

signals:
    void userDeleted(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    //REST URL to delete user service
    QString api;

    //form data set by main window
    QString username;

    QNetworkAccessManager *networkManager;
};

#endif // DELETEUSERFORM_H
