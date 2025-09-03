#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countPairs(vector<int>& nums, int target) {
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (nums[i] + nums[j] < target)
          count++;
      }
    }
    return count;
  }
};

int main() {
  vector<int> nums = {-1,1,2,3,1};
  int target = 2;

  Solution sol = Solution();
  int ans = sol.countPairs(nums, target);

  cout << ans << endl;
}
