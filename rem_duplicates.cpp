#include <iostream>
#include <vector>
using namespace std;

int remove_duplicates(vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }

    int j = 0; // To store index of next unique element

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[arr.size() - 1];

    return j;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int newSize = remove_duplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}