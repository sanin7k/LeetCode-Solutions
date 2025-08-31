#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minimumOperations(vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] % 3 != 0)
        count++;
    }
    return count;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4};

  Solution sol = Solution();
  int ans = sol.minimumOperations(nums);

  cout << ans << endl;
}
