#ifndef SLOTCLASS_H
#define SLOTCLASS_H

#include <QObject>

class SlotClass : public QObject
{
    Q_OBJECT
public:
    explicit SlotClass(QObject *parent = nullptr);

public slots:
  void slotName();

};

#endif // SLOTCLASS_H
