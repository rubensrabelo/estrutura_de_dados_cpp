// Escrever o número de triângulos em pé

#include<iostream>

int number_triangles(int n);

int main() {
    int n = 0;

    std::cout << "Enter the height of the triangle: " << std::endl;
    std::cin >> n;

    int result = number_triangles(n);

    std:: cout << "Total standing triangles = " << result << std::endl;

    return 0;
}

int number_triangles(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return n + 2 * number_triangles(n - 1) - number_triangles(n - 2);
}