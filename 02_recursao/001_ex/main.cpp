#include<iostream>

int sum_integer(int num);

int main() {
    int num = 1000;

    std::cout << "Enter a value " << std::endl;
    std::cin >> num;

    int result = sum_integer(num);

    std::cout << "The sum is: " << result << std::endl;

    return 0;
}

int sum_integer(int num) {
    if(num == 1) 
        return num;
    return num + sum_integer(num - 1);
}