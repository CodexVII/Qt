#ifndef MULTIPLEUSERSEARCHFORM_H
#define MULTIPLEUSERSEARCHFORM_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"

class MultipleUserSearchForm : public QObject
{
    Q_OBJECT
public:
    explicit MultipleUserSearchForm(QObject *parent = 0);
    void searchUsers();

    QString getUsername() const;
    void setUsername(const QString &value);

signals:
    void searchComplete(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    QString api;

    //Used as a pattern to search for possible matches
    QString username;

    QNetworkAccessManager *networkManager;

};

#endif // MULTIPLEUSERSEARCHFORM_H
