#ifndef GREETER_H
#define GREETER_H

#include <QObject>

class Greeter : public QObject
{
    Q_OBJECT
public:
    explicit Greeter(QObject *parent = nullptr);

public slots:
    void hello();

signals:

};

#endif // GREETER_H
