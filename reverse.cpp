#include<iostream>
#include<vector>
using namespace std;

int reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    reverseArray(arr);

    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}