#include<iostream>

using namespace std;

void fillArray(int* arr, int n);
void showArray(const int* arr, int n);

int main() {
    int n;

    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;

    int* arr = new (nothrow) int[n];

    if(!arr) {
        cout << "Memory overflow" << endl;
        exit(1);
    }

    fillArray(arr, n);
    showArray(arr, n);

    delete[] arr;

    return 0;
}

void fillArray(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
}

void showArray(const int* arr, int n) {
    cout << "[";
    for(int i = 0; i < n - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n - 1] << "]";
}