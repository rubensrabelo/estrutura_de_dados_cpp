// Arquivo myMath.cpp

#include<iostream>
#include "myMath.h"

int main() {

    std::cout << "Soma = " << math::sum(5, 6) << std::endl;
    std::cout << "Subtracao = " << math::sub(5, 6) << std::endl;
    std::cout << "Multiplicacao = " << math::mul(5, 6) << std::endl;
    std::cout << "Divisao = " << math::div(12, 6) << std::endl;

    return 0;
}