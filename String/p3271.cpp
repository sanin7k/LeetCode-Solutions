class Solution {
public:
  string stringHash(string s, int k) {
    string result = "";
    for (int i = 0; i <= s.size() - k; i += k) {
      string str = s.substr(i, k);
      int sum = 0;
      for (auto x : str) {
        sum += x - 'a';
      }
      result += 'a' + sum % 26;
    }
    return result;
  }
};
