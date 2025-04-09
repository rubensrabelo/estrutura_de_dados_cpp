#include<iostream>

using namespace std;

void printArray(int* const arr, int n);
void addArray(int* arr, int n);
int sumPositives(int* arr, int n);

int main() {
    int n = 5;
    int* arr = new (nothrow) int[n];

    if(!arr) {
        cout << "Error in the array" << endl;
        exit(1);
    }

    addArray(arr, n);
    printArray(arr, n);
    int result = sumPositives(arr, n);

    cout << "Sum = " << result << endl;

    delete[] arr;

    return 0;
}

void printArray(int* const arr, int n) {
    cout << "[";
    for(int i = 0; i < (n-1); i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << "]" << endl;
}

void addArray(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int sumPositives(int* arr, int n) {
    if(n == 0) return arr[n];

    if(arr[n] < 0) return 0 + sumPositives(arr, n-1);

    return arr[n] + sumPositives(arr, n-1);
}