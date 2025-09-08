#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    int ans;
    sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) {
      return a[0] < b[0];
    });
    ans = points[1][0] - points[0][0];
    for (int i = 0; i < points.size() - 1; i++) {
      if (points[i + 1][0] - points[i][0] > ans)
        ans = points[i + 1][0] - points[i][0];
    }
    return ans;
  }
};

int main() {
  vector<vector<int>> points = {{8,7},{9,9},{7,4},{9,7}};

  Solution sol = Solution();
  int ans = sol.maxWidthOfVerticalArea(points);

  cout << ans << endl;
}
