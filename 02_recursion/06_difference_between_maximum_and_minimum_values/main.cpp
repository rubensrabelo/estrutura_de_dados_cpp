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
        arr[i] = i;
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
    if(n == 0 ) return arr[n];
    int max = arr[n] < maxValueInArray(arr, n-1) ? maxValueInArray(arr, n-1) : arr[n];
    return max;
}

int minValueInArray(int* arr, int n) {
    if(n == 0 ) return arr[n];
    int min = arr[n] < minValueInArray(arr, n-1) ? minValueInArray(arr, n-1) : arr[n];
    return min;
}
