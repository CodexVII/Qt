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
    explicit BenchmarkWorker(QObject *parent = 0);
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

signals:
    void waitOnResponse();

private slots:
    void onRequestFinished();
    void beginWaiting();

private:
    bool advance = true;
    int limit = 0;
    QString hostname;

    QNetworkAccessManager *networkManager;
public slots:
};

#endif // BENCHMARKWORKER_H
