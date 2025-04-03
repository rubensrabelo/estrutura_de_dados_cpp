#include<iostream>

using namespace std;

void add_arr(int* arr, int n);
void show_arr(int* const arr, int n);
void max_min_array(int* arr, int n, int* max, int* min);

int main() {
    int n=0;
    int max=-999999, min=999999;
    
    cout << "Enter array size: " << endl;
    cin >> n;

    int* arr = new (nothrow) int[n];

    if(!arr) {
        cout << "Memory overflow" << endl;
        exit(1);
    }

    add_arr(arr, n);
    show_arr(arr, n);
    max_min_array(arr, n, &max, &min);

    cout << endl;
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;

    delete[] arr;
    return 0;
}

void add_arr(int* arr, int n) {
    for(int i=0; i<n; i++) {
        arr[i] = i;
    }
}

void show_arr(int* const arr, int n) {
    cout << "[";
    for(int i=0; i<(n-1); i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << "]";
}

void max_min_array(int* arr, int n, int* max, int* min) {
    for(int i=0; i<n; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }

        if(arr[i] < *min) {
            *min = arr[i];
        }
    }
}