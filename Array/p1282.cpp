#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    int n = groupSizes.size();
    vector<vector<int>> ans;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        visited[i] = true;
        int count = 1;
        vector<int> group;
        group.push_back(i);
        for (int j = i + 1; j < n && count < groupSizes[i]; j++) {
          if (groupSizes[i] == groupSizes[j] && !visited[j]) {
            count++;
            group.push_back(j);
            visited[j] = true;
          }
        }
        ans.push_back(group);
      }
    }
    return ans;
  }
};

int main() {
  vector<int> groupSizes = {3,3,3,3,3,1,3};

  Solution sol = Solution();
  vector<vector<int>> ans = sol.groupThePeople(groupSizes);
  for (auto x : ans) {
    for (auto y : x) {
      cout << y << " ";
    }
    cout << endl;
  }
}
