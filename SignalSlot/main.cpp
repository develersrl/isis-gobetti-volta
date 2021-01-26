#include <QCoreApplication>

#include "sigclass.h"
#include "slotclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SigClass sigcl;
    SlotClass slotcl;

    QObject::connect(&sigcl, SIGNAL(signalName()), &slotcl, SLOT(slotName()));

    sigcl.signalEmitter();

    return a.exec();
}
