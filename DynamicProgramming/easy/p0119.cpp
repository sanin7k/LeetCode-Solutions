class Solution {
public:
  vector<int> getRow(int rowIndex) {
    vector<int> ans(rowIndex + 1, 1);
    vector<int> dp(rowIndex, 1);
    for (int i = 0; i <= rowIndex; ++i) {
      for (int j = 1; j < i; ++j) {
        ans[j] = dp[j - 1] + dp[j];
      }
      for (int j = 1; j < i; ++j) {
        dp[j] = ans[j];
      }
    }
    return ans;
  }
};
