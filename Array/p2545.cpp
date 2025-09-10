#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
    sort(score.begin(), score.end(), [k](const vector<int>& x, const vector<int>& y) {
      return x[k] > y[k];
    });
    return score;
  }
};

int main() {
  vector<vector<int>> score = {{10,6,9,1},{7,5,11,2},{4,8,3,15}};
  int k = 2;

  Solution sol = Solution();
  vector<vector<int>> ans = sol.sortTheStudents(score, k);
  for (auto i : ans) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
  cout << endl;
}
