class Solution {
public:
  vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
    int m = rowSum.size(), n = colSum.size();
    vector<vector<int>> ans(m, vector<int>(n));
    while (i < m && j < n) {
      ans[i][j] = min(rowSum[i], colSum[j]);
      rowSum[i] -= ans[i][j];
      colSum[j] -= ans[i][j];

      if (rowSum[i] == 0) i++;
      if (colSum[j] == 0) j++;
    }
    return ans;
  }
};

