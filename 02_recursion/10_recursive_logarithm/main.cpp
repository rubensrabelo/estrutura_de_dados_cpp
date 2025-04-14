#include<iostream>

using namespace std;

int recursiveLogarithm(int x, int base) {
    if(x < base) return 0;
    return 1 + recursiveLogarithm(x/base, base);
}

int main() {
    int x = 0;
    int base = 0;

    cin >> x;
    cin >> base;
    
    int result = recursiveLogarithm(x, base);

    cout << "log_" << base << "(" << x << ") = " << result << endl;

    return 0;
}