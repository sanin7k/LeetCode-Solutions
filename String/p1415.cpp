class Solution {
public:
  string getHappyString(int n, int k) {
    vector<string> words;
    generate(words, "", n);
    return (k <= words.size()) ? words[k - 1] : "";
  }

  void generate(vector<string> &words, string current, int n) {
    if (current.size() == n) {
      words.push_back(current);
      return;
    }
    for (int i = 0; i < 3; i++) {
      char c = 'a' + i;
      if (current.empty() || current.back() != c) {
        generate(words, current + c, n);
      }
    }
  }
};
