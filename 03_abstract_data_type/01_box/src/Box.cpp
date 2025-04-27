#include "Box.h"

Box::Box(double length, double width, double height)
    : length(length), width(width), height(height) {}

double Box::volume() {
    return length * width * height;
} 