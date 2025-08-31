#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> pivotArray(vector<int>& nums, int pivot) {
    int n = nums.size();

    vector<int> lesser;
    vector<int> equal;
    vector<int> greater;

    for (int i = 0; i < n; i++) {
      if (nums[i] < pivot) {
        lesser.push_back(nums[i]);
      } else if (nums[i] > pivot) {
        greater.push_back(nums[i]);
      } else {
        equal.push_back(nums[i]);
      }
    }
    
    nums.clear();

    nums.insert(nums.end(), lesser.begin(), lesser.end());
    nums.insert(nums.end(), equal.begin(), equal.end());
    nums.insert(nums.end(), greater.begin(), greater.end());
    return nums;
  }
}; 

int main() {
  vector<int> nums = {9,12,5,10,14,3,10}; 
  int pivot = 10;

  Solution sol = Solution();
  nums = sol.pivotArray(nums, pivot);

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}
