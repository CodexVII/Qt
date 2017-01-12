#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateCounters()
{
    QString input = ui->counterUpdate->text();


    QObject::connect(&a, SIGNAL(valueChanged(int)),
                       &b, SLOT(setValue(int)));

    if(input.toInt() < 20){
        a.setValue(input.toInt());
    }else{
        b.setValue(input.toInt());
    }

    ui->aValue->setText(QString::number(a.value()));
    ui->bValue->setText(QString::number(b.value()));
}

void MainWindow::on_pushButton_clicked()
{
    updateCounters();
}
