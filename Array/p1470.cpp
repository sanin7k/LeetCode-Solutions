#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ans(2 * n);
    for (int i = 0; i < n; i++) {
      ans[i * 2] = nums[i];
      ans[i * 2 + 1] = nums[n + i];
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {1, 1, 2, 2};
  int n = 2;

  Solution ans = Solution();
  vector<int> a = ans.shuffle(nums, n);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
