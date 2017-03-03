#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <QWidget>
#include <QUrlQuery>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QRegularExpression>
#include <QHostInfo>

#include "network.h"

namespace Ui {
class Benchmark;
}

class Benchmark : public QWidget
{
    Q_OBJECT

public:
    explicit Benchmark(QWidget *parent = 0);
    ~Benchmark();
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
    void on_pushButton_clicked();
    void onRequestFinished();
    void beginWaiting();

    void on_pushButton_2_clicked();

private:
    Ui::Benchmark *ui;

    bool advance = true;
    int limit = 0;
    QString hostname;

    QNetworkAccessManager *networkManager;
};

#endif // BENCHMARK_H
