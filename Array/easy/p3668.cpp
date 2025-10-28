class Solution {
public:
  vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
    vector<int> ans;
    for (auto x : order) {
      for (auto y : friends) {
        if (x == y) {
          ans.push_back(x);
          break;
        }
      }
    }
    return ans;
  }
};

