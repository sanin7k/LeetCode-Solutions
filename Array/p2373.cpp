#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0));
    for (int i = 0; i < n - 2; i++) {
      for (int j = 0; j < n - 2; j++) {
        int temp = 0;
        for (int k = i; k < i + 3; k++) {
          for (int l = j; l < j + 3; l++) {
            temp = max(temp, grid[k][l]);
          }
        }
        maxLocal[i][j] = temp;
      }
    }
    return maxLocal;
  }
};

int main() {
  vector<vector<int>> grid = {{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};

  Solution ans = Solution();
  vector<vector<int>> a = ans.largestLocal(grid);
  for (auto x : a) {
    for (auto y : x)
      cout << y << " ";
    cout << endl;
  }
}
