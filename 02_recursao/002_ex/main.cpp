// O cálculo do fatorial de forma recursiva

#include<iostream>

int factorial(int num);

int main() {
    int num=0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;

    long int result = factorial(num);

    std::cout << num << "! = " << result << std::endl;

    return 0;
}

int factorial(int num) {
    if(num == 0)
        return 1;
    return num * factorial(num - 1);
}