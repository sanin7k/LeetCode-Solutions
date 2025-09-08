#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i != j && nums[j] < nums[i]) {
          ans[i]++;
        }
      }
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {8,1,2,2,3};

  Solution sol = Solution();
  vector<int> ans = sol.smallerNumbersThanCurrent(nums);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}
