#include "apiform.h"
#include "loginwindow.h"
#include "loginregisterwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginRegisterWindow w;
    w.show();

    return a.exec();
}
