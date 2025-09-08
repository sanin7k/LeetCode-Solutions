#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> decode(vector<int>& encoded, int first) {
    int n = encoded.size();
    vector<int> arr(n + 1);
    arr[0] = first;
    for (int i = 0; i < n; i++) {
      arr[i + 1] = encoded[i] ^ arr[i];
    }
    return arr;
  }
};

int main() {
  vector<int> encoded = {1,2,3};
  int first = 1;

  Solution sol = Solution();
  vector<int> ans = sol.decode(encoded, first);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}
