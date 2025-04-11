#include<iostream>

using namespace std;

void addArray(int* arr, int n);
void printArray(int* const arr, int n);
int maxValueInArray(int* arr, int n);
int minValueInArray(int* arr, int n);

int main() {
    int n = 4;
    int* arr = new (nothrow) int[n];

    if(!arr) {
        cout << "Erro in memory" << endl;
        exit(1);
    }

    addArray(arr, n);
    printArray(arr, n);

    int maxValue = maxValueInArray(arr, n);
    int minValue = minValueInArray(arr, n);
    
    cout << maxValue << ", " << minValue << endl; 

    int result = maxValue - minValue;

    cout << "Difference between maximum and minimum values is " << result << endl;

    delete[] arr;
    return 0;
}

void addArray(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(int* const arr, int n) {
    cout << "[";
    for(int i = 0; i < (n-1); i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << "]" << endl;
}

int maxValueInArray(int* arr, int n) {
    if(n == 1) return arr[0];
    int max_rest = maxValueInArray(arr, n-1);
    return arr[n-1] > max_rest ? arr[n-1] : max_rest;
}

int minValueInArray(int* arr, int n) {
    if(n == 1 ) return arr[0];
    int min_rest = minValueInArray(arr, n-1);
    return arr[n-1] < min_rest ? arr[n-1] : min_rest;
}
