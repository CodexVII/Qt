#include "benchmark.h"
#include "ui_benchmark.h"
#include <QDebug>
#include "benchmark.h"
Benchmark::Benchmark(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Benchmark)
{
    ui->setupUi(this);
    ui->progressBar->hide();
    ui->pushButton_2->setEnabled(false);

    //NETWORK
//    networkManager = new QNetworkAccessManager(this);
//    hostname = QHostInfo::localHostName();

//    connect(networkManager, SIGNAL(finished(QNetworkReply*)),
//            this, SLOT(onRequestFinished()));

//    connect(this, SIGNAL(waitOnResponse()),
//            this, SLOT(beginWaiting()));
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

    worker.setLimit(ui->horizontalSlider->value());
//    limit = ui->horizontalSlider->value();
    if(ui->radioButton->isChecked()){
          worker.expressBenchmark();
    }else{
//        targettedBenchmark();
    }

    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
}


void Benchmark::on_pushButton_2_clicked()
{
//    limit = 0;
}
