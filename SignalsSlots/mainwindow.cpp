#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "counter.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Counter a, b;
    QObject::connect(&a, SIGNAL(valueChanged(int)),
                       &b, SLOT(setValue(int)));

    a.setValue(12);
    cout << a.value() << endl;
    cout << b.value() << endl;

    b.setValue(48);
    cout << a.value() << endl;
    cout << b.value() << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

