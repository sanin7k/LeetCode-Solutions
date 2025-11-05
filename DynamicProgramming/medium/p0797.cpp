class Solution {
private:
  void dfs(vector<int>& current, vector<vector<int>>& graph, vector<vector<int>>& res) {
    if (current.back() == graph.size() - 1) {
      res.push_back(current);
      return;
    }
    for (int& x : graph[current.back()]) {
      current.push_back(x);
      dfs(current, graph, res);
      current.pop_back();
    }
  }
public:
  vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> res;
    vector<int> current = { 0 };
    dfs(current, graph, res);
    return res;
  }
};

