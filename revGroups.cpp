#include<iostream>
#include<vector>
using namespace std;

void reverseGroups(vector<int>& arr, int k) {
    int n = arr.size();
    for (int i = 0; i < n; i += k) { // Process each group of size k
        int left = i;
        int right = min(i + k - 1, n - 1); //The last group has only one element. right=i+k-1=6+3-1=8
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;
    reverseGroups(arr, k);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}