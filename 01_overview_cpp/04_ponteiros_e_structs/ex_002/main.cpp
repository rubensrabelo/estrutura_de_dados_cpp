#include<iostream>

struct Point {
    float x;
    float y;
};

void double_point(Point *p1, Point *p2);

int main() {
    Point p1, p2;
    p1.x = 5;
    p1.y = 5;
    p2.x = 6;
    p2.y = 8;

    std::cout << "Before function: \n";
    std::cout << "p1 = " << "(" << p1.x << ", " << p1.y <<")\n";
    std::cout << "p2 = " << "(" << p2.x << ", " << p2.y <<")\n\n";

    double_point(&p1, &p2);

    std::cout << "After function: \n";
    std::cout << "p1 = " << "(" << p1.x << ", " << p1.y <<")\n";
    std::cout << "p2 = " << "(" << p2.x << ", " << p2.y <<")\n\n";

    return 0;
}

void double_point(Point *p1, Point *p2) {
    p1->x = p1->x * 2;
    p1->y = p1->y * 2;
    p2->x = p2->x * 2;
    p2->y = p2->y * 2;
}