#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(vector<int>& nums, int k) {
    int min = k;
    for (auto x : nums) {
      min ^= x;
    }
    int i = 0;
    while (min) {
      min &= (min - 1);
      i++;
    }
    return i;
  }
};

int main() {
  vector<int> nums = {2,1,3,4};
  int k = 1;

  Solution sol = Solution();
  int ans = sol.minOperations(nums, k);

  cout << ans << endl;
}
