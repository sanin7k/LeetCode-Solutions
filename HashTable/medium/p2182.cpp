class Solution {
public:
  string repeatLimitedString(string s, int repeatLimit) {
    unordered_map<char, int> m;
    for (auto& x : s) {
      m[x]++;
    }
    priority_queue<pair<char, int>> pq;
    for (auto& x : m) {
      pq.push({x.first, x.second});
    }
    string ans = "";
    while (!pq.empty()) {
      auto [ c, count ] = pq.top(); pq.pop();
      int use = min(count, repeatLimit);
      for (int i = 0; i < use; ++i) ans.push_back(c);
      count -= use;
      if (count > 0 && !pq.empty()) {
        auto [ c2, count2 ] = pq.top(); pq.pop();
        ans.push_back(c2);
        count2--;
        if (count2 > 0)
          pq.push({c2, count2});
        pq.push({c, count});
      }
    }
    return ans;
  }
};

