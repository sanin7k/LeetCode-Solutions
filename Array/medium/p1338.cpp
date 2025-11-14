class Solution {
public:
  int minSetSize(vector<int>& arr) {
    unordered_map<int, int> mp;
    for (auto& x : arr) mp[x]++;
    priority_queue<int> pq;
    for (auto& x : mp) pq.push(x.second);

    int count = 0;
    int ans = 0;
    while (!pq.empty()) {
      int c = pq.top(); pq.pop();
      count += c;
      ++ans;
      if (count >= arr.size() / 2) return ans;
    }
    return -1;
  }
};

