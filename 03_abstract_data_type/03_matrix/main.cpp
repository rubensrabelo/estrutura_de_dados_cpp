#include <iostream>

#include "Matrix.h"

int main() {
    Matrix mat1(2, 3);
    Matrix mat2(2, 3);

    mat1.set(0, 0, 5);
    mat1.set(1, 2, 7);

    mat2.set(0, 0, 5);
    mat2.set(1, 2, 7);

    std::cout << "Matriz 1:\n";
    mat1.print();

    std::cout << "\nMatriz 2:\n";
    mat2.print();

    std::cout << "\nAs matrizes são iguais? ";
    std::cout << (mat1.isEqual(mat2) ? "Sim" : "Não") << "\n";

    return 0;
}
