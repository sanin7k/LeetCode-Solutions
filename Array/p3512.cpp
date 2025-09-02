#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minOperations(vector<int>& nums, int k) {
    int sum = 0;
    for (auto x : nums) {
      sum += x;
    }
    return sum % k;
  }
};

int main() {
  vector<int> nums = {3,9,7};
  int k = 5;

  Solution ans = Solution();
  int a = ans.minOperations(nums, k);
  cout << a << endl;
}
