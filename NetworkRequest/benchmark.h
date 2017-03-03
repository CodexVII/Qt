#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <QWidget>
#include <QUrlQuery>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QRegularExpression>
#include <QHostInfo>

#include "network.h"
#include "benchmarkworker.h"

namespace Ui {
class Benchmark;
}

class Benchmark : public QWidget
{
    Q_OBJECT

public:
    explicit Benchmark(QWidget *parent = 0);
    ~Benchmark();

signals:
    void waitOnResponse();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Benchmark *ui;

    BenchmarkWorker worker;
};

#endif // BENCHMARK_H
