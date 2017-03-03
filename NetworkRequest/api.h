#ifndef API_H
#define API_H


class API
{
public:
    API();

    QString getUser() const;
    void setUser(const QString &value);

    QString getPayment() const;
    void setPayment(const QString &value);

private:
    QString User;
    QString Payment;
};

#endif // API_H
