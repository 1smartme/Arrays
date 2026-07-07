
#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>& arr) {
    int n = arr.size();
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < n) {
        arr[j++] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeros(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}