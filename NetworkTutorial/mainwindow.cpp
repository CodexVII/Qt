#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&theDon,SIGNAL(dataReadyRead(QByteArray)),this,SLOT(dataInTheHouse(QByteArray data)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataInTheHouse(QByteArray data)
{
    cout << "Data was sent!" << endl;
    QString dataString;
    dataString = data;  /* = is overloaded in QString to conver to str */
    ui->apiResponseDisplay->setText(dataString);
}


void MainWindow::on_pushButton_clicked()
{
    theDon.makeRequest("http://paste2.org");
}
