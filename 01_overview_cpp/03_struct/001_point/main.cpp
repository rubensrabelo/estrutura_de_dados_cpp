#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

struct Point {
    float x;
    float y;
};

float distance_points(Point p1, Point p2) {
    float x = p2.x - p1.x;
    float y = p2.y - p1.y;

    float distance = sqrt(pow(x, 2) + pow(y, 2));

    return distance;
}

int main() {
    Point p1;
    Point p2;

    cout << "Enter x and y for point 1: " << endl;
    cin >> p1.x >> p1.y;

    cout << "Enter x and y for point 2: " << endl;
    cin >> p2.x >> p2.y;

    float distance = distance_points(p1, p2);

    cout << fixed << setprecision(2);
    cout << "Distance between point 1 and point 2 is: " << distance << endl;

    return 0;
}