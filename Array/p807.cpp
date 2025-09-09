#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    int n = grid.size();
    int res = 0;
    vector<int> rmax(n, 0), cmax(n,0);
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < n; c++) {
        rmax[r] = max(rmax[r], grid[r][c]);
        cmax[r] = max(cmax[r], grid[c][r]);
      }
    }
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < n; c++) {
        res += min(rmax[r], cmax[c]) - grid[r][c];
      }
    }
    return res;
  }
};

int main() {
  vector<vector<int>> nums = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};

  Solution sol = Solution();
  int ans = sol.maxIncreaseKeepingSkyline(nums);

  cout << ans << endl;
}
