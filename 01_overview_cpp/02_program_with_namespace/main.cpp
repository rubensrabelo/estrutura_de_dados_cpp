#include<iostream>

#include "mymath/mymath.h"

int main() {
    float a = 10, b = 5;

    std::cout << "Sum: " << mymath::sum(a, b) << std::endl;
    std::cout << "Subtraction: " << mymath::subtraction(a, b) << std::endl;

    return 0;
}