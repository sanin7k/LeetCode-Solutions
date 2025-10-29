class Solution {
public:
  vector<int> partitionLabels(string s) {
    vector<int> ans;
    unordered_map<char, int> last;
    for (int i = 0; i < s.size(); ++i) {
      last[s[i]] = i;
    }
    int left = 0;
    while (left < s.size()) {
      int right = last[s[left]];
      for (int j = left + 1; j < right; ++j) {
        if (last[s[j]] > right) right = last[s[j]];
      } 
      ans.push_back(right - left + 1);
      left = right + 1;
    }
    return ans;
  }
};

