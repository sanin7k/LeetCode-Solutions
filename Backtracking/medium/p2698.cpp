class Solution {
private:
  void backtrack(int curr_sum, int pos, const string& s, const int& target, bool& found) {
    if (found) return;
    if (pos == s.size()) {
      if (curr_sum == target) found = true; 
      return;
    }
    int val = 0;
    for (int i = pos; i < s.size(); ++i) {
      val = val * 10 + (s[i] - '0');
      if(curr_sum + val > target) break;
      backtrack(curr_sum + val, i + 1, s, target, found);
      if(found) return;
    }
  }

public:
  int punishmentNumber(int n) {
    int ans = 0;;
    for (int i = 1; i <= n; ++i) {
      int x = i * i;
      bool found = false;
      backtrack(0, 0, to_string(x), i, found);
      if (found) ans += x;
    }
    return ans;
  }
};

