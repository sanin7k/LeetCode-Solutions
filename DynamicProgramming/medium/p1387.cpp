class Solution {
private:
  unordered_map<int, int> m = {{1, 0}};
  int powValue(int x) {
    if (auto it = m.find(x); it != m.end()) return it->second;
    int next = (x % 2 == 0) ? x / 2 : 3 * x + 1;
    return m[x] = 1 + powValue(next);
  }
public:
  int getKth(int lo, int hi, int k) {
    vector<pair<int, int>> ans;
    ans.reserve(hi - lo + 1);
    for (int i = lo; i <= hi; ++i) {
      ans.emplace_back(powValue(i), i);
    }
    nth_element(ans.begin(), ans.begin() + k - 1, ans.end());
    return ans[k - 1].second;
  }
};

