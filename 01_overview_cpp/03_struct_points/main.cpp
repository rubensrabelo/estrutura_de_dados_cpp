#include<iostream>
#include<cmath>

struct Point {
    float x;
    float y;
};

float distancePointOrigin(Point point);

int main() {
    Point point {-12, 9};

    float distanceOrigin = distancePointOrigin(point);

    std::cout << "Distance from the origin = " << distanceOrigin << std::endl; 

    return 0;
}

float distancePointOrigin(Point point) {
    float differenceX = point.x - 0;
    float differenceY = point.y - 0;

    return sqrt(pow(differenceX, 2) + pow(differenceY, 2));
}