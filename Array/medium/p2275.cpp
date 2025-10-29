class Solution {
public:
  int largestCombination(vector<int>& candidates) {
    int mx = 0;
    for (int i = 0; i < 24; ++i) {
      int count = 0;
      for (auto &x : candidates) {
        count += x & 1;
        x >>= 1;
      }
      if (count == candidates.size()) return count;
      mx = max(mx, count);

    }
    return mx;
  }
};

