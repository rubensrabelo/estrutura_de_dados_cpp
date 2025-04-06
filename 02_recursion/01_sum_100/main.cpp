#include<iostream>

using namespace std;

int sum_numbers(int num);

int main() {
    
    int result = sum_numbers(100);

    cout << "The sum of the first 100 numbers is " << result << endl;

    return 0;
}

int sum_numbers(int num) {
    if(num == 0) return 0;
    return num + sum_numbers(num - 1);
}