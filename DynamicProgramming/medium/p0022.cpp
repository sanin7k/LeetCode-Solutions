
class Solution {
public:
  void generate(string current, int open, int close, vector<string>& list, int n) {
    if (current.size() == 2 * n) { list.push_back(current); return; }
    if (open < n)
      generate(current + "(", open + 1, close, list, n);
    if (close < open)
      generate(current + ")", open, close + 1, list, n);
  }

  vector<string> generateParenthesis(int n) {
    vector<string> ans;
    generate("", 0, 0, ans, n);
    return ans;
  }
};

