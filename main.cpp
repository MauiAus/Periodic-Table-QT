#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "system.h"

SYSTEMS * sys;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sys = new SYSTEMS();
    sys->show();
    return a.exec();
}
