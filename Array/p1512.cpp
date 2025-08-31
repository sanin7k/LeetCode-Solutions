#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numIdenticalPairs(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (nums[i] == nums[j]) {
          count++;
        }
      }
    }
    return count;
  }
};

int main() {
  vector<int> nums = {1, 1};

  Solution sol = Solution();
  int ans = sol.numIdenticalPairs(nums);

  cout << ans << endl;
}
