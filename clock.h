#ifndef CLOCK_H
#define CLOCK_H

#include <QObject>
#include <QDateTime>
#include <QTimer>

class Clock : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QDateTime dateTime READ currentDateTime NOTIFY dateChanged)

public:
    explicit Clock(QObject *parent = nullptr);

    QDateTime currentDateTime();

signals:
    void dateChanged();

public slots:
    void updateClock();

private:
    QDateTime currentDateTimeValue;
    QTimer* timer;
};

#endif // CLOCK_H
