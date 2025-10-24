class Solution {
public:
  bool isSubsequence(string s, string t) {
    int n = t.size();
    if (s == "") return true;
    for (int i = 0; i < n; ++i) {
      if (s[0] == t[i]) {
        return isSubsequence(s.substr(1), t.substr(i + 1));
      }
    }
    return false;
  }
};
