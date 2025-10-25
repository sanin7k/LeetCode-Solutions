class Solution {
public:
  vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
    int n = groups.size();
    if (n < 2) return words;
    vector<string> ans;
    vector<int> indices;
    for (int i = 0; i < 2; ++i) {
      vector<int> idx;
      idx.push_back(i);
      for (int j = i; j < n; ++j) {
        if (groups[idx.back()] != groups[j])
          idx.push_back(j);
      }
      if (idx.size() > indices.size()) {
        indices = idx;
      }
    }
    for(auto x : indices) 
      ans.push_back(words[x]);
    return ans;
  }
};
