#include<iostream>

using namespace std;

int euclidAlgorithm(int m, int n) {
    if(m % n == 0) return n;
    return euclidAlgorithm(n, m % n);
}

int main() {
    int result = euclidAlgorithm(42, 30);

    cout << "Result = " << result << endl;

    return 0;
}