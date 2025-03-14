// Determinar o valor máximo de um vetor de forma recursiva

#include<iostream>

int value_max(int *arr, int n);

int main() {
    int n = 5;
    int arr[] = {50, 8, 30, 10, 25};

    int result = value_max(arr, n - 1); 

    std::cout << "The largest value of the vector is " << result << std::endl;

    return 0;
}

int value_max(int *arr, int n) {
    if(n == 0)
        return arr[n];
    int result = arr[n] > value_max(arr, n - 1) ? arr[n] : value_max(arr, n - 1);
    return result;
}