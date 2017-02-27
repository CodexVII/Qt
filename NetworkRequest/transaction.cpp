#include "transaction.h"

Transaction::Transaction()
{

}

int Transaction::getId() const
{
    return id;
}

void Transaction::setId(int value)
{
    id = value;
}

QString Transaction::getTimestamp() const
{
    return timestamp;
}

void Transaction::setTimestamp(const QString &value)
{
    timestamp = value;
}

QString Transaction::getSender() const
{
    return sender;
}

void Transaction::setSender(const QString &value)
{
    sender = value;
}

QString Transaction::getReceiver() const
{
    return receiver;
}

void Transaction::setReceiver(const QString &value)
{
    receiver = value;
}

double Transaction::getAmount() const
{
    return amount;
}

void Transaction::setAmount(double value)
{
    amount = value;
}
