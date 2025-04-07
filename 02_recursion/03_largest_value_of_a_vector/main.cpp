#include<iostream>

using namespace std;

void addValueInArray(int* arr, int n);
void showArray(int* const arr, int n);
int largestValue(int* arr, int n);

int main() {
    int n = 5;
    int* arr = new (nothrow) int[n];

    if(!arr) cout << "Error in the array" << endl;

    addValueInArray(arr, n);
    showArray(arr, n);

    int result = largestValue(arr, n);

    cout << "The largest value of a vector is " << result << endl;

    delete[] arr;

    return 0;
}

void showArray(int* const arr, int n) {
    cout << "[";
    for(int i = 0; i<(n-1); i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << "]" << endl;
}

void addValueInArray(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
}

int largestValue(int* arr, int n) {
    if(n == 0) return arr[n];
    int value = arr[n] < largestValue(arr, n-1) ? largestValue(arr, n-1) : arr[n];
    return value;
}