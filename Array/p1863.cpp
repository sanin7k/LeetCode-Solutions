#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int subsetXORSum(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < (1 << n); i++){
      int nxor = 0;
      for (int j = 0; j < n; j++) {
        if (i & (1 << j)) {
          nxor ^= nums[j];
        }
      }
      sum += nxor;
    }
    return sum;
  }
};

int main() {
  vector<int> nums = {1, 3};

  Solution sol = Solution();
  int ans = sol.subsetXORSum(nums);

  cout << ans << endl;
}
