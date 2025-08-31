#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countMaxOrSubsets(vector<int>& nums) {
    int n = nums.size();
    int maxOr = 0;
    for (int i = 0; i < n; i++) {
      maxOr |= nums[i];
    }
    int count = 0;
    for (int i = 0; i < (1 << n); i++){
      int nOr = 0;
      for (int j = 0; j < n; j++) {
        if (i & (1 << j)) {
          nOr |= nums[j];
        }
      }
      if (nOr == maxOr) {
        count++;
      }
    }
    return count;
  }
};

int main() {
  vector<int> nums = {3, 1};

  Solution sol = Solution();
  int ans = sol.countMaxOrSubsets(nums);

  cout << ans << endl;
}
