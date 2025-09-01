#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int max = 0;
    for (auto x : accounts) {
      int wealth = 0;
      for (auto y : x){
        wealth += y;
      }
      if (wealth > max)
        max = wealth;
    }
    return max;
  }
};

int main() {
  vector<vector<int>> nums = {{2,8,7},{7,1,3},{1,9,5}};

  Solution sol = Solution();
  int ans = sol.maximumWealth(nums);

  cout << ans << endl;
}
