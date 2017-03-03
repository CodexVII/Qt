#ifndef BENCHMARKWORKER_H
#define BENCHMARKWORKER_H

#include <QObject>
#include <QUrlQuery>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QRegularExpression>
#include <QHostInfo>
#include <QNetworkAccessManager>

#include "network.h"
class BenchmarkWorker : public QObject
{
    Q_OBJECT
public:
    explicit BenchmarkWorker(int iteration, QObject *parent = 0);
    ~BenchmarkWorker();
    void createUser(QString username);
    void deleteUser(QString username);
    void getUser();
    void searchUsers();
    void pay();
    void getTransactionHistory();
    void login();
    void updatePassword();

    void expressBenchmark();
    void targettedBenchmark();
    void delay(int ms);
    void updateNetworkSlot();

    int getLimit() const;
    void setLimit(int value);

    bool getExpress() const;
    void setExpress(bool value);

signals:
    void waitOnResponse();
    void finished();


public slots:
    void run();

private slots:
    void onRequestFinished();
    void beginWaiting();


private:
    bool advance = true;
    bool express = true;
    int limit = 0;
    QString hostname;

    QNetworkAccessManager *networkManager;
public slots:
};

#endif // BENCHMARKWORKER_H
