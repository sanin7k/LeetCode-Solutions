class Solution {
private:
  vector<vector<bool>> isPal;
  void solve(int start, vector<string>& current, string& s, vector<vector<string>>& ans) {
    if (start == s.size()) {
      ans.push_back(current);
      return;
    }
    for (int end = start; end < s.size(); ++end) {
      if (isPal[start][end]) {
        current.push_back(s.substr(start, end - start + 1));
        solve(end + 1, current, s, ans);
        current.pop_back();
      }
    }
  }
public:
  vector<vector<string>> partition(string s) {
    int n = s.size();
    isPal.assign(n, vector<bool>(n, false));
    for (int i = n - 1; i >= 0; --i) {
      for (int j = i; j < n; ++j) {
        if (s[i] == s[j] && (j - i <= 2 || isPal[i + 1][j - 1])) {
          isPal[i][j] = true;
        }
      }
    }
    vector<vector<string>> ans;
    vector<string> curr;
    solve(0, curr, s, ans);
    return ans;
  }
};

