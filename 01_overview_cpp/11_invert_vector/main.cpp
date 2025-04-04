#include<iostream>

using namespace std;

void add_arr(int* arr, int n);
void show_arr(int* const arr, int n);
void invert_vector(int *arr, int n);

int main() {
    int n;

    cout << "Enter array size: " << endl;
    cin >> n;

    int* arr = new (nothrow) int[n];

    if(!arr) {
        cout << "Memory overflow" << endl;
        exit(1);
    }

    add_arr(arr, n);
    cout << "BEFORE FUNCTION: " << endl;
    show_arr(arr, n);

    cout << endl;

    invert_vector(arr, n);

    cout << "AFTER FUNCTION: " << endl;
    show_arr(arr, n);

    delete[] arr;

    return 0;
}

void add_arr(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cin >>arr[i];
    }
}

void show_arr(int* const arr, int n) {
    cout << "[";
    for(int i=0; i<(n-1); i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << "]";
}

void invert_vector(int *arr, int n) {
    for(int i=0; i<n - 1; i++) {
        for(int j=0; j<n - 1 - i; j++) {
            if(arr[j] < arr[j+1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}