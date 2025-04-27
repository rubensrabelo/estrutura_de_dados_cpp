#include<iostream>

#include "Box.h"

using namespace std;

int main() {
    Box box(2, 2, 2);

    cout << "Volume = " << box.volume() << endl;

    return 0;
}