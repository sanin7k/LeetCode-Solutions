class Solution {
public:
  vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int n = graph.size();

    vector<int> outdeg(n, 0);
    vector<vector<int>> rGraph(n);
    for (int i = 0; i < n; ++i) {
      outdeg[i] = (int)graph[i].size();
      for (auto& j : graph[i]) {
        rGraph[j].push_back(i);
      }
    }

    queue<int> q;
    for (int i = 0; i < n; ++i) if (outdeg[i] == 0) q.push(i);
    
    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (auto& u : rGraph[v]) {
        if (--outdeg[u] == 0) q.push(u);
      }
    }

    vector<int> ans;
    ans.reserve(n);
    for (int i = 0; i < n; ++i) if (outdeg[i] == 0) ans.push_back(i);

    return ans;
  }
};

