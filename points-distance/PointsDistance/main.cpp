#include <QCoreApplication>
#include <QDebug>
#include <math.h>

#include "point.h"

// pointsDistance takes two Point objects in input (p1 and p2)
// and returns the distance between them (as a float number)
float pointsDistance(Point p1, Point p2) {
    float diffx = p2.getX() - p1.getX();
    float diffy = p2.getY() - p1.getY();

    float quadx = diffx * diffx;
    float quady = diffy * diffy;

    float dist = sqrt(quadx + quady);

    return dist;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point p1(2.0, 3.5);
    Point p2(-5.0, 7.5);

    qDebug() << "The distance is " << pointsDistance(p1, p2);

    return a.exec();
}
