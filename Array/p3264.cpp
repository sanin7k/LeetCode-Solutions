#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    for (int i = 0; i < k; i++) {
      int idx = distance(nums.begin(), min_element(nums.begin(), nums.end()));
      nums[idx] *= multiplier;
    } 
    return nums;
  }
};

int main() {
  vector<int> nums = {2,1,3,5,6}; 
  int k = 5, multiplier = 2;

  Solution sol = Solution();
  vector<int> ans = sol.getFinalState(nums, k, multiplier);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}
