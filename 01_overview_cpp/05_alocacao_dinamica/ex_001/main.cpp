#include<iostream>

void fillArray(int *arr, int n);
void showArray(int *arr, int n);

int main() {
    int n = 0;

    std::cout << "Enter array size: ";
    std::cin >> n;

    int *arr = new int[n];

    fillArray(arr, n);
    showArray(arr, n);
    
    delete[] arr;

    return 0;
}

void fillArray(int *arr, int n) {
    for(int i = 0; i < n; i++){
        arr[i] = i * 3;
    }
}

void showArray(int *arr, int n){
    std::cout << "[";
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << (i < n - 1 ? ", " : "]\n");
    }
}