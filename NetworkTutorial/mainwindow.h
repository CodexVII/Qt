#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mynetworkclass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void dataInTheHouse(QByteArray data);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MyNetworkClass theDon;  /* need to connect signals and slots */
};

#endif // MAINWINDOW_H
