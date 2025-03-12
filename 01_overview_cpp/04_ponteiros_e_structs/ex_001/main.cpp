#include<iostream>

struct Point {
    float x;
    float y;
};

int main() {
    Point p1, p2, *p3, *p4;

    p3 = &p1;
    p4 = &p2;

    p1.x = 1;
    p2.x = 3;
    p1.y = 2;
    p2.y = 4;

    (*p3).x = 2.5;
    (*p3).y = 2.5;

    p4->x = 4.5;
    p4->y = 4.5;

    std::cout << "p1  = (" << p1.x << ", " << p1.y << ")\n"; 
    std::cout << "p2  = (" << p2.x << ", " << p2.y << ")\n"; 

    return 0;
}