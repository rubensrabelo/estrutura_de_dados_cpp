#include<iostream>

using namespace std;

long int factorial(int num);

int main () {
    int num = 10;
    long int result = factorial(num);

    cout << num << "! = " << result << endl;

    return 0;
}

long int factorial(int num) {
    if(num == 0 || num == 1) return 1;

    return num * factorial(num - 1);
}