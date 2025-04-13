#include<iostream>
#include<vector>

using namespace std;

void triangleOfSum(vector<int> arr) {
    if(arr.size() == 1) {
        cout << arr[0] << endl;
        return;
    }

    vector<int> newArr;
    for(int i = 0; i < arr.size() - 1; i++) {
        newArr.push_back(arr[i] + arr[i+1]);
    }

    triangleOfSum(newArr);

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i != arr.size() - 1)
            cout << ", ";
    }
    
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    triangleOfSum(arr);
    return 0;
}