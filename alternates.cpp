#include <iostream>
#include <vector>
using namespace std;

vector<int> findAlternates(vector<int>& nums) {
    vector<int>res;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0) {
            res.push_back(nums[i]);
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<int> res = findAlternates(nums);
    
    cout << "Alternate elements: ";
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}