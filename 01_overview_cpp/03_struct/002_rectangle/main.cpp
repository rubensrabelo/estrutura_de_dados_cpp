#include<iostream>
#include<cmath>

using namespace std;

struct Point {
    float x;
    float y;
};

struct Rectangle {
    Point* topLeft;
    Point* bottomRight;

    Rectangle() {
        topLeft = new Point();
        bottomRight = new Point();
    }

    ~Rectangle() {
        delete topLeft;
        delete bottomRight;
    }

    float area() {
        return abs(topLeft->x - bottomRight->x) * abs(topLeft->y - bottomRight->y);
    }

    float diagonal() {
        return sqrt(pow(topLeft->x - bottomRight->x, 2) + pow(topLeft->y - bottomRight->y, 2));
    }

    float perimeter() {
        return 2 * (abs(topLeft->x - bottomRight->x) + abs(topLeft->y - bottomRight->y));
    }
};

int main() {
    Rectangle* rect = new Rectangle();

    cout << "Enter top left point: ";
    cin >> rect->topLeft->x >> rect->topLeft->y;

    cout << "Enter bottom right point: ";
    cin >> rect->bottomRight->x >> rect->bottomRight->y;

    cout << "Area: " << rect->area() << endl;
    cout << "Diagonal: " << rect->diagonal() << endl;
    cout << "Perimeter: " << rect->perimeter() << endl;

    delete rect;

    return 0;
}