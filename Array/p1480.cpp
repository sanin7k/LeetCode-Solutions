#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    vector<int> ans(nums.size());
    ans[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      ans[i] = ans[i - 1] + nums[i];
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {1,2,3,4};

  Solution sol = Solution();
  vector<int> ans = sol.runningSum(nums);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}
