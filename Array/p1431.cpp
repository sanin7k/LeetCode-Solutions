#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result(candies.size(), false);
    int max = 0;
    for (auto x : candies) {
      if (x > max)
        max = x;
    }
    for (int i = 0; i < candies.size(); i++) {
      if (candies[i] + extraCandies >= max) {
        result[i] = true;
      }
    }
    return result;
  }
};

int main() {
  vector<int> nums = {2,3,5,1,3};
  int n = 3;

  Solution ans = Solution();
  vector<bool> a = ans.kidsWithCandies(nums, n);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
