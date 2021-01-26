#include <QCoreApplication>
#include <QTimer>

#include "point.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point p(0, 0);

    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), &p, SLOT(moveX()));
    timer->start(1000);

    return a.exec();
}
