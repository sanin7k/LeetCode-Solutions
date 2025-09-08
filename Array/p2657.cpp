#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size();
    vector<int> C(n);
    vector<int> count(n, 0);
    C[n - 1] = n;
    for (int i = n - 2; i >= 0; i--) {
      if (A[i + 1] == B[i + 1]) {
        C[i] = C[i + 1] - 1;
      } else {
        C[i] = C[i + 1];
        if (count[A[i + 1] - 1] == 0) {
          count[A[i + 1] - 1]++;
          C[i]--;
        }
        if (count[B[i + 1] - 1] == 0) {
          count[B[i + 1] - 1]++;
          C[i]--;
        }
      }
    }
    return C;
  }
};

int main() {
  vector<int> A = {1,3,2,4};
  vector<int> B = {3,1,2,4};
  
  Solution sol = Solution();
  vector<int> ans = sol.findThePrefixCommonArray(A, B);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;
}
