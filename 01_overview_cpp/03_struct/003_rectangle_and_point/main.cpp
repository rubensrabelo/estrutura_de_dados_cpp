#include<iostream>
#include<cmath>

using namespace std;

struct Point{
    float x;
    float y;
};

struct Rectangle{
    Point topLeft;
    Point bottomRight;

    Rectangle(Point p1, Point p2) {
        topLeft.x = min(p1.x, p2.x);
        topLeft.y = max(p1.y, p2.y);
        bottomRight.x = max(p1.x, p2.x);
        bottomRight.y = min(p1.y, p2.y);
    }

    bool is_a_point_inside(Point p) {
        return ((p.x >= topLeft.x && p.x <= bottomRight.x) && (p.y >= bottomRight.y && p.y <= topLeft.y));
    }

};

int main() {
    Rectangle rec = Rectangle({1, 1}, {3, 3});
    Point p = {2, 2};

    cout << rec.is_a_point_inside(p) << endl;

    return 0;
}