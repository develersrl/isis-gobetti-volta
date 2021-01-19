#include "clock.h"

Clock::Clock(QObject *parent) : QObject(parent)
{
    currentDateTimeValue = QDateTime::currentDateTime();
    timer = new QTimer(this);
    timer->start(1000);

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(updateClock()));
}

QDateTime Clock::currentDateTime() {
    return currentDateTimeValue;
}

void Clock::updateClock() {
    currentDateTimeValue = currentDateTimeValue.addSecs(1);
    emit dateChanged();
}
