#include "slotclass.h"

#include <QDebug>

SlotClass::SlotClass(QObject *parent) : QObject(parent)
{

}

void SlotClass::slotName() {
    qDebug() << "I received a signal!";
}
