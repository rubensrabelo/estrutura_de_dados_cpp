#include <iostream>

using namespace std;

int binomialCoefficients(int n, int k) {
    if (k == 0 || k == n)
        return 1;

    return binomialCoefficients(n - 1, k - 1) + binomialCoefficients(n - 1, k);
}

int main() {
    int n = 5, k = 3;
    cout << "Coeficiente Binomial (" << n << " escolhe " << k << ") = " << binomialCoefficients(n, k) << endl;

    return 0;
}
