#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "counter.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateCounters();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Counter a, b;
};

#endif // MAINWINDOW_H
