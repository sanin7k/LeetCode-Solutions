class Solution {
public:
  int findCenter(vector<vector<int>>& edges) {
    vector<int> e(edges.size() + 2);

    for (auto& x : edges){
      for (auto& y : x) {
        e[y]++;
        if (e[y] == edges.size()) return y;
      }
    }
    return -1;
  }
};

