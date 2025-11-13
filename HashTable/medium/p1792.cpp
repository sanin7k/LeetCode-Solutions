class Solution {
public:
  double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    int n = classes.size();
    auto gain = [](int p, int q) -> double {
      return (double)(p + 1) / (q + 1) - (double)p / q;
    };

    using T = pair<double, int>;
    priority_queue<T> pq;
    for (int i = 0; i < n; ++i) {
      pq.push({ gain(classes[i][0], classes[i][1]), i});
    }
    for (int i = 0; i < extraStudents; ++i) {
      auto [ _, idx ] = pq.top(); pq.pop();
      pq.push({ gain(++classes[idx][0], ++classes[idx][1]), idx});
    }

    double ans = 0;
    for (auto& x : classes) {
      ans += (double)x[0] / x[1];
    }
    return ans / n;
  }
};

