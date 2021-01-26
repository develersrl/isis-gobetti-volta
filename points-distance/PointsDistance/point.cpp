#include "point.h"

Point::Point()
{
   x = 0;
   y = 0;
}

Point::Point(float a, float b) {
   x = a;
   y = b;
}

void Point::setX(float a) {
   x = a;
}

void Point::setY(float b) {
   y = b;
}

float Point::getX() {
   return x;
}

float Point::getY() {
   return y;
}
