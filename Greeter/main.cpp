#include <QCoreApplication>
#include <QTimer>

#include "greeter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Greeter gr;

    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), &gr, SLOT(hello()));
    timer->start(1000);

    return a.exec();
}
