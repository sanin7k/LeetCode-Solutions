#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> transformArray(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] % 2 == 0)
        nums[i] = 0;
      else
        nums[i] = 1;
    }

    sort(nums.begin(), nums.end());

    return nums;
  }
};

int main() {
  vector<int> nums = {1, 3};

  Solution sol = Solution();
  vector<int> ans = sol.transformArray(nums);

  for (int i = 0; i < nums.size(); i++)
    cout << ans[i] << " ";
  cout << endl;
}
