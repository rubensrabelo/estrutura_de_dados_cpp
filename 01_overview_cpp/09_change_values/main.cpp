#include<iostream>

using namespace std;

void change_values(int* n1, int* n2);

int main() {
    int n1=6, n2=8;

    cout << "BEFORE FUNCTION: " << endl;
    cout  << "Value 01 = " << n1 << endl;
    cout  << "Value 02 = " << n2 << endl;

    change_values(&n1, &n2);

    cout << endl;

    cout << "AFTER FUNCTION: " << endl;
    cout  << "Value 01 = " << n1 << endl;
    cout  << "Value 02 = " << n2 << endl;

    return 0;
}

void change_values(int* n1, int* n2) {
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}