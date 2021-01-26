#include "sigclass.h"

SigClass::SigClass(QObject *parent) : QObject(parent)
{

}

void SigClass::signalEmitter() {
    emit signalName();
}
