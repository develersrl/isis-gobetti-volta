#ifndef POINT_H
#define POINT_H

#include <QObject>

class Point : public QObject
{
    float x, y;

    Q_OBJECT
public:
    explicit Point(QObject *parent = nullptr);
    Point(float x, float y);

    // setters
    void setX(float a);
    void setY(float b);

    // getters
    float getX();
    float getY();

public slots:
    void moveX();

signals:

};

#endif // POINT_H
