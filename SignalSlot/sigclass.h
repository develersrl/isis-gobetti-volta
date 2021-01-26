#ifndef SIGCLASS_H
#define SIGCLASS_H

#include <QObject>

class SigClass : public QObject
{
    Q_OBJECT
public:
    explicit SigClass(QObject *parent = nullptr);

    void signalEmitter();

signals:
    void signalName();
};

#endif // SIGCLASS_H
