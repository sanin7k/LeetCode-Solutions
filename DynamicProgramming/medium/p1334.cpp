class Solution {
public:
  int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
    vector<vector<int>> w(n, vector<int>(n, INT_MAX));
    for (int i = 0; i < n; i++) {
      w[i][i] = 0;
    }
    for (auto& x : edges) {
      w[x[0]][x[1]] = x[2];
      w[x[1]][x[0]] = x[2];
    }
    for (int k = 0; k < n; ++k) {
      for (int i = 0; i < n; ++i) {
        if (w[i][k] == INT_MAX) continue;
        for (int j = 0; j < n; ++j) {
          if (w[k][j] == INT_MAX) continue;
          w[i][j] = min(w[i][j], w[i][k] + w[k][j]);
        }
      }
    }
    int idx = -1, mn = n;
    for (int i = 0; i < n; ++i) {
      int count = 0;
      for (int j = 0; j < n; ++j) {
        if (w[i][j] <= distanceThreshold) {
          count++;
        }
      }
      if (count <= mn) {
        idx = i;
        mn = min(mn, count);
      }
    }
    return idx;
  }
};

