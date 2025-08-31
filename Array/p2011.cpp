#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int finalValueAfterOperations(vector<string>& operations) {
    int X = 0;
    for (auto op : operations) {
      if (op == "++X" || op == "X++")
        X++;
      else if (op == "--X" || op == "X--")
        X--;
    }
    return X;
  }
};

int main() {
  vector<string> nums = {"X++", "++X"};

  Solution sol = Solution();
  int ans = sol.finalValueAfterOperations(nums);

  cout << ans << endl;
}
