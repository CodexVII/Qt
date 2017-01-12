#ifndef PAYMENTFORM_H
#define PAYMENTFORM_H

#include <QObject>
#include "QNetworkReply"
#include "QUrlQuery"

class PaymentForm : public QObject
{
    Q_OBJECT
public:
    explicit PaymentForm(QObject *parent = 0);
    void pay();

    QString getSender() const;
    void setSender(const QString &value);

    QString getReceiver() const;
    void setReceiver(const QString &value);

    double getAmount() const;
    void setAmount(double value);

signals:
    void paymentProcessed(QByteArray);

public slots:
    void responseReady(QNetworkReply*);

private:
    //REST URL for the payment service
    QUrl api;

    //form data set by main window
    QString sender;
    QString receiver;
    double amount;

    QNetworkAccessManager *networkManager;
};

#endif // PAYMENTFORM_H
