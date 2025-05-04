#include<iostream>
#include "Point.h"

using namespace std;

int main() {
    Point point{3, 4};
    Point p{0, 0};

    cout << point << endl;
    cout << "Distance = " << point.distanceBetweenPoints(p);

    return 0;
}