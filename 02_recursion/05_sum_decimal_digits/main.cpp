#include<iostream>

using namespace std;

int sum_decimal_digits(int num);

int main() {
    int  num = 555555;

    int result = sum_decimal_digits(num);

    cout << "Sum = " << result << endl;

    return 0;
}

int sum_decimal_digits(int num) {
    if(num == 0) return 0;

    int value = num % 10;
    num = num / 10;
    
    return value + sum_decimal_digits(num);
}