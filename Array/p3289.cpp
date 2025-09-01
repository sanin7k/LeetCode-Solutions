#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//   vector<int> getSneakyNumbers(vector<int>& nums) {
//     vector<int> ans;
//     sort(nums.begin(), nums.end());
//     for (int i = 0; i < nums.size() - 1; i++) {
//       if (nums[i] == nums[i + 1])
//         ans.push_back(nums[i]);
//     }
//     return ans;
//   }
// };

class Solution {
public:
  vector<int> getSneakyNumbers(vector<int>& nums) {
    vector<int> ans;
    vector<int> count(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      count[nums[i]]++;
      if (count[nums[i]] == 2)
        ans.push_back(nums[i]);
    }
    return ans;
  }
};



int main() {
  vector<int> nums = {1, 1, 2, 2};

  Solution ans = Solution();
  vector<int> a = ans.getSneakyNumbers(nums);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
