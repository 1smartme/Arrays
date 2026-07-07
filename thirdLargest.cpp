#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int thirdLargest(vector<int>& arr) {
    if (arr.size() < 3) {
        return -1; // Not enough elements for a third largest
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int num : arr) {
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second && num < first) {
            third = second;
            second = num;
        } else if (num > third && num < second) {
            third = num;
        }
    }

    return (third == INT_MIN) ? -1 : third; // Return -1 if there is no third largest
}

int main() {
    vector<int> arr = {10, 5, 8, 12, 3, 7};
    cout << "Third largest element is: " << thirdLargest(arr) << endl;
    return 0;
}