#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void leaders(int arr[], int n) {
    vector<int> lead;

    int maxRight = arr[n - 1];
    lead.push_back(maxRight);

    for(int i=n - 2; i >= 0; i--) {
        if(arr[i] > maxRight) {
            maxRight = arr[i];
            lead.push_back(maxRight);
        }
    }
    reverse(lead.begin(), lead.end());
    for(int i=0; i<lead.size(); i++) {
        cout << lead[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Leaders in the array are: ";
    leaders(arr, n);

    return 0;
}

