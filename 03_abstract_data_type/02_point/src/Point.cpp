#include "Point.h"
#include<cmath>


Point::Point(double x, double y): x(x), y(y) {}

Point::~Point() {}

void Point::setX(double x) {this->x = x;}

double Point::getX() {return this->x;}

void Point::setY(double y) {this->y = y;}

double Point::getY() {return this->y;}

double Point::distanceBetweenPoints(Point p) {
    double distX = pow(this->x - p.x, 2);
    double distY = pow(this->y - p.y, 2);

    return sqrt(distX + distY);
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "Point(X=" << p.x << ", Y=" << p.y << ")";
    return os; 
}