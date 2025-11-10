class Solution {
public:
  string removeStars(string s) {
    vector<char> st;
    for (auto& x : s) {
      if (x != '*') st.push_back(x);
      else st.pop_back();
    }
    string ans = "";
    for (auto& x : st)
      ans += x;
    return ans;
  }
};

