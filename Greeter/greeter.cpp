#include "greeter.h"

#include <QDebug>

Greeter::Greeter(QObject *parent) : QObject(parent)
{

}

void Greeter::hello() {
    qDebug() << "Hello, everybody!";
}
