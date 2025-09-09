#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> findMatrix(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    vector<bool> visited(n, false);
    int i = 0;
    while (i < n) {
      vector<int> count(n, 0);
      vector<int> arr;
      for (int j = 0; j < n; j++) {
        if (count[nums[j] - 1] == 0 && !visited[j]) {
          arr.push_back(nums[j]);
          visited[j] = true;
          count[nums[j] - 1]++;
          i++;
        }
      }
      result.push_back(arr);
    }
    return result;
  }
};

int main() {
  vector<int> nums = {1,3,4,1,2,3,1};

  Solution sol = Solution();
  vector<vector<int>> ans = sol.findMatrix(nums);

  for (auto i : ans) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
  cout << endl;
}
