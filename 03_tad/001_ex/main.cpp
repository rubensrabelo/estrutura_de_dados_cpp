// Arquivo de main.cpp
#include<iostream>
#include<iomanip>
#include "Box.h"

using namespace std;

int main() {
    Box box {2.0, 3.0, 4.0};
    Box bbox;

    cout << fixed << setprecision(2);
    cout << box.volume() << endl;
    cout << bbox.volume() << endl;

    return 0;
}