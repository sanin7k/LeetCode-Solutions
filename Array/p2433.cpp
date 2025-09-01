#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> findArray(vector<int>& pref) {
    vector<int> arr(pref.size()); 
    arr[0] = pref[0];
    for (int i = 1; i < pref.size(); i++) {
      arr[i] = pref[i - 1] ^ pref[i];
    }
    return arr;
  }
};

int main() {
  vector<int> nums = {4, 0, 7, 7};

  Solution ans = Solution();
  vector<int> a = ans.findArray(nums);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
