#include<iostream>

void change_number(int *num1, int *num2);

int main() {
    int num1, num2;

    std::cout << "Enter the first and second numbers:\n";
    std::cin >> num1 >> num2;

    std::cout << "\nNumbers before a function:\n";
    std::cout << "\nNumber 01 = " << num1 << ", Number 02 = " << num2 << "\n";

    change_number(&num1, &num2);

    std::cout << "\nNumbers after a function:\n";
    std::cout << "\nNumber 01 = " << num1 << ", Number 02 = " << num2 << "\n";

    return 0;
}

void change_number(int *num1, int *num2) {
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}