#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countConsistentStrings(string allowed, vector<string>& words) {
    int count = 0;
    for (auto x : words) {
      int n = 0;
      for (auto y : allowed) {
        for (auto z : x) {
          if (y == z)
            n++;
        }
      }
      if (n == x.size())
        count++;
    }
    return count;
  }
};

int main() {
  string allowed = "cad"; 
  vector<string> words = {"cc","acd","b","ba","bac","bad","ac","d"};

  Solution sol = Solution();
  int ans = sol.countConsistentStrings(allowed, words);

  cout << ans << endl;
}
