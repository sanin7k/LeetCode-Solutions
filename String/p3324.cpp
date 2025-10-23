class Solution {
public:
  vector<string> stringSequence(string target) {
    string current = "";
    vector<string> result;
    for (auto x : target) {
      for (int i = 0; i < 26; i++) {
        char ch = i + 'a';
        result.push_back(current + ch);
        if (ch == x) break;
      }
      current += x;
    }
    return result;
  }
};
