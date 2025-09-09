#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    int n = queries.size();
    vector<int> answer(n, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < points.size(); j++) {
        int x2 = pow(points[j][0] - queries[i][0], 2);
        int y2 = pow(points[j][1] - queries[i][1], 2);
        int r2 = pow(queries[i][2], 2);
        if (x2 + y2 <= r2) {
          answer[i]++;
        }
      }
    }
    return answer;
  }
};

int main() {
  vector<vector<int>> points = {{1,3},{3,3},{5,3},{2,2}};
  vector<vector<int>> queries = {{2,3,1},{4,3,1},{1,1,2}};

  Solution sol = Solution();
  vector<int> ans = sol.countPoints(points, queries);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}
