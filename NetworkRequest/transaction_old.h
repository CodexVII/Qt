#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QObject>

class Transaction
{
public:
    Transaction();


    int getId() const;
    void setId(int value);

    QString getTimestamp() const;
    void setTimestamp(const QString &value);

    QString getSender() const;
    void setSender(const QString &value);

    QString getReceiver() const;
    void setReceiver(const QString &value);

    double getAmount() const;
    void setAmount(double value);

private:
    int id;
    QString timestamp;
    QString sender;
    QString receiver;
    double amount;
};

#endif // TRANSACTION_H
