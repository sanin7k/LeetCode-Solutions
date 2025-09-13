#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countTriplets(vector<int>& arr) {
    int count = 0;
    int n = arr.size();
    vector<int> pre(n + 1, 0);
    for (int x = 1; x <= n; x++) {
        pre[x] = arr[x - 1] ^ pre[x - 1];
    }
    for (int i = 1; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        for (int k = j; k <= n; k++) {
          int a = pre[i - 1] ^ pre[j - 1];
          int b = pre[j - 1] ^ pre[k];
          if (a == b) count++;
        }
      }
    }
    return count;
  }
};

int main() {
  vector<int> arr = {2,3,1,6,7}; 

  Solution sol = Solution();
  int ans = sol.countTriplets(arr);

  cout << ans << endl;
}
