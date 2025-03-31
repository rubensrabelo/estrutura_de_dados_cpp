#include<iostream>

using namespace std;

struct Point {
    float x;
    float y;

    Point(float px, float py): x(px), y(py) {}

    ~Point() {}

    friend ostream& operator<<(ostream& os, const Point& p);
};

ostream& operator<<(ostream& os, const Point& p) {
    os << "Point(x=" << p.x << ", y=" << p.y << ")";
    return os;
}

void exchangeValues(Point *p1, Point *p2);

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    cout << "Before Function:" << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    
    cout << endl;

    exchangeValues(&p1, &p2);

    cout << "After Function:" << endl;
    cout << p1 << endl;
    cout << p2 << endl;

    return 0;
}

void exchangeValues(Point *p1, Point *p2) {
    Point aux(0, 0);
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}