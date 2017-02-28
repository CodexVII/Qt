#ifndef TRANSACTIONHISTORYFORM_H
#define TRANSACTIONHISTORYFORM_H

#include <QObject>
#include "QNetworkReply"
#include "network.h"

class TransactionHistoryForm : public QObject
{
    Q_OBJECT
public:
    explicit TransactionHistoryForm(QObject *parent = 0);
    void getTransactionHistory();

    QString getUsername() const;
    void setUsername(const QString &value);

signals:
    void transactionHistoryReceived(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    //REST URL for the transaction service
    QString api;
    QString username;

    QNetworkAccessManager *networkManager;
};
#endif // TRANSACTIONHISTORYFORM_H
