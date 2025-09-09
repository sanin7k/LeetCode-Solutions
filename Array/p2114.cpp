#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int mostWordsFound(vector<string>& sentences) {
    int most = 0;
    for (string x : sentences) {
      int spaces = count(x.begin(), x.end(), ' ');
      most = max(most, spaces);
    }
    return most + 1;
  }
};

int main() {
  vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};

  Solution sol = Solution();
  int ans = sol.mostWordsFound(sentences);

  cout << ans << endl;
}
