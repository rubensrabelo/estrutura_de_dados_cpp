#ifndef POINT_H
#define POINT_H

#include<iostream>

class Point {
    private:
        double x;
        double y;
    public:
        Point(double x, double y);
        ~Point();
        void setX(double x);
        double getX();
        void setY(double y);
        double getY();
        double distanceBetweenPoints(Point p);

        friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif