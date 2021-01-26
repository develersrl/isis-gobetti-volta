#ifndef POINT_H
#define POINT_H


class Point
{
   // member values
   float x, y;

public:
   // constructors
   Point();
   Point(float x, float y);

   // setters
   void setX(float a);
   void setY(float b);

   // getters
   float getX();
   float getY();
};


#endif // POINT_H
