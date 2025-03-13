#include<iostream>

void mm(int *arr, int n, int *max, int *min);

int main() {
    int max = -100000, min = 100000, n;

    std::cout << "Enter array size:\n";
    std::cin >> n;

    int *arr = new (std::nothrow) int[n];

    if(!arr)
        std::cout << "Memory overflow" << std::endl;

    for(int i = 0; i < n; i++) {
        std::cout << "Enter a array number:\n";
        std::cin >> arr[i];
    }

    mm(arr, n, &max, &min);

    std::cout << "max = " << max << " and min = " << min << std::endl;

    delete[] arr;

    return 0;
}

void mm(int *arr, int n, int *max, int *min) {
    for(int i = 0; i < n; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }

        if(arr[i] < *min) {
            *min = arr[i];
        }
    }
}