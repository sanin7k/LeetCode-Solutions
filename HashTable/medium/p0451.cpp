class Solution {
public:
  string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (auto& c : s) {
      freq[c]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto& x : freq) {
      pq.push({x.second, x.first});
    }
    string ans = "";
    while (!pq.empty()) {
      auto [ freq, c ] = pq.top(); pq.pop();
      for (int i = 0; i < freq; ++i)
        ans += c;
    }
    return ans;
  }
};

