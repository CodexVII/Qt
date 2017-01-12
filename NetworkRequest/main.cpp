#include "apiform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApiForm w;
    w.show();

    return a.exec();
}
