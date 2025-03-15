// Exporneciacao

#include<iostream>

long int exponentiation(int a, int b);

int main() {
    int a = 0, b = 0;

    std::cout << "Enter the base of exponentiation: " << std::endl;
    std::cin >> a;

    std::cout << "Enter the exponent of the exponentiation: " << std::endl;
    std::cin >> b;

    long int result = exponentiation(a, b);

    std::cout << a << "^" << b << " = " << result << std::endl;

    return 0;
}

long int exponentiation(int a, int b) {
    if(b == 0) return 1;
    return a * exponentiation(a, b - 1);
}