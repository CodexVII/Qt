#include "apiform.h"
#include "loginwindow.h"
#include "loginregisterwindow.h"
#include "benchmark.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginRegisterWindow w;
    w.show();

    Benchmark b;
    b.show();


    return a.exec();
}
