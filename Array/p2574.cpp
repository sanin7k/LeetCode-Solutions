#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n);
    vector<int> leftSum(n, 0);
    vector<int> rightSum(n, 0);
    for (int i = 1; i < n; i++) {
      leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
      rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }
    for (int i = 0; i < n; i++) {
      answer[i] = abs(leftSum[i] - rightSum[i]);
    }
    return answer;
  }
};

int main() {
  vector<int> nums = {10,4,8,3};

  Solution ans = Solution();
  vector<int> a = ans.leftRightDifference(nums);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
