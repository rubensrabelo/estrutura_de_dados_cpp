#include<iostream>
#include<cmath>

struct Point {
    float x;
    float y;
};

struct Rectangle {
    Point leftTop;
    Point rightBottom;

    Rectangle(Point lt, Point rb): leftTop(lt), rightBottom(rb) {}

    ~Rectangle() {}

    float width() {
        return rightBottom.x - leftTop.x;
    }

    float height() {
        return leftTop.y - rightBottom.y;
    }

    float area() {
        return width() * height();
    }

    float diagonal() {
        return sqrt(pow(width(), 2) + pow(height(), 2));
    }

    float perimeter() {
        return 2 * (width() + height());
    }

    bool isInside(Point p) {
        return ((leftTop.x <= p.x) && (rightBottom.x >= p.x)) && 
        ((rightBottom.y <= p.y) && (leftTop.y >= p.y));
    }
};

int main() {
    Point p1 = {2, 5};
    Point p2 = {7, 1};

    Rectangle rect(p1, p2);

    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Diagonal: " << rect.diagonal() << std::endl;
    std::cout << "perimeter: " << rect.perimeter() << std::endl;

    std::cout << std::endl;

    Point p3 = {4, 3};

    std::string result = rect.isInside(p3)? "true" : "false";

    std::cout << "Is Inside? " << result << std::endl;

    return 0;
}