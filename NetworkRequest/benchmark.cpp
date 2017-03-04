#include "benchmark.h"
#include "ui_benchmark.h"
#include <QDebug>
#include <QThread>
#include <QMessageBox>

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
    ui->progressBar->setValue(0);
    ui->progressBar->setMaximum(ui->horizontalSlider->value()*ui->horizontalSlider_2->value());

    int instances = ui->horizontalSlider_2->value();
    // clear previous runs in case
    worker.clear();
    thread.clear();

    // allocate memory
    thread.reserve(instances);
    worker.reserve(instances);

    for(int i=0; i< instances; i++){
        thread.push_back(new QThread);
        worker.push_back(new BenchmarkWorker(ui->horizontalSlider->value(), ui->comboBox->itemText(ui->comboBox->currentIndex())));
        worker[i]->moveToThread(thread[i]);

//        thread[i] = new QThread;
//        worker[i] = new BenchmarkWorker(ui->horizontalSlider->value());
//        worker[i]->moveToThread(thread[i]);

        connect(thread[i], SIGNAL(started()), worker[i], SLOT(run()));
        connect(worker[i], SIGNAL(finished(int)), thread[i], SLOT(quit()));
        connect(worker[i], SIGNAL(nextIteration()), this, SLOT(updateProgressBar()));
        connect(thread[i], SIGNAL(finished()), thread[i], SLOT(deleteLater()));
        connect(worker[i], SIGNAL(finished(int)), worker[i], SLOT(deleteLater()));

        qDebug() << "connected";
        worker[i]->setLimit(ui->horizontalSlider->value());
    //    limit = ui->horizontalSlider->value();

        if(ui->radioButton->isChecked()){
             worker[i]->setExpress(true);

        }else{
            worker[i]->setExpress(false);
        }
        thread[i]->start();

        qDebug() << "started";
    }
    qDebug() << "instance size" + QString::number(thread.size());

}

void Benchmark::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    for(int i=0; i<ui->horizontalSlider_2->value(); i++){
        worker[i]->setLimit(0);
    }
    ui->progressBar->setValue(ui->progressBar->maximum());
    worker.clear();
    thread.clear();
}

/**
 * Delete individually to allow new worker objects to be made
 *
 * @brief Benchmark::onBenchmarkFinished
 * @param iter
 */
void Benchmark::onBenchmarkFinished(int iter)
{
    delete worker[iter];
    delete thread[iter];
}

void Benchmark::updateProgressBar()
{
    ui->progressBar->setValue(ui->progressBar->value()+1);
    if(ui->progressBar->value()==ui->progressBar->maximum()){
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(false);

        QMessageBox::information(this, tr("Benchmark"),
                                       tr("Benchmark Complete!"),
                                       QMessageBox::Ok);
    }
}

