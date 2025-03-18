#include<iostream>

#include "Box.h"

Box::Box(): length {1}, width {1}, height {1} {}
Box::Box(double lv, double wv, double hv): length {lv}, width {wv}, height {hv} {}
Box::~Box() {std::cout << "Box destroyed!\n";}

double Box::volume() const {
    return length * width * height;
}