#include "benchmark.h"
#include "ui_benchmark.h"
#include <QDebug>
#include <QThread>

#include "benchmark.h"
Benchmark::Benchmark(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Benchmark)
{
    ui->setupUi(this);
    ui->progressBar->hide();
    ui->pushButton_2->setEnabled(false);


}


Benchmark::~Benchmark()
{
    delete ui;
}

/**
 *  Currently runs all the tests on a single thread
 *  Possible ways  to track progress when there are multiple threads could be
 *      1) Each thread finishes add to 1
 *      2) Monitor a single thread
 *      3) Monitor all threads (seperate progress bar for each)
 *      4) Calculate total and each thread will add to that count as each iteration passes
 * @brief Benchmark::on_pushButton_clicked
 */
void Benchmark::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->progressBar->setMaximum(ui->horizontalSlider->value());

    thread = new QThread;
    worker = new BenchmarkWorker(ui->horizontalSlider->value());
    worker->moveToThread(thread);

    connect(thread, SIGNAL(started()), worker, SLOT(run()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()));
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    connect(worker, SIGNAL(finished()), worker, SLOT(deleteLater()));

    worker->setLimit(ui->horizontalSlider->value());
//    limit = ui->horizontalSlider->value();
    worker->setExpress(true);
    if(ui->radioButton->isChecked()){
          thread->start();
    }else{
//        targettedBenchmark();
    }
}

void Benchmark::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    worker->setLimit(0);
}

