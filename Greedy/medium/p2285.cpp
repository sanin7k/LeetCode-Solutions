class Solution {
public:
  long long maximumImportance(int n, vector<vector<int>>& roads) {
    vector<int> deg(n, 0);
    for (auto& x : roads) {
      deg[x[0]]++;
      deg[x[1]]++;
    }
    sort(deg.begin(), deg.end());

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += deg[i] * (long long)(i + 1);
    }
    return ans;
  }
};

