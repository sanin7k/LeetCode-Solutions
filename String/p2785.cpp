class Solution {
public:
  string sortVowels(string s) {
    vector<pair<char, int>> sVowels;
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < s.size(); i++) {
      for (char x : vowels) {
        if (x == s[i]) {
          sVowels.push_back(make_pair(s[i], i));
          break;
        }
      }
    }
    auto ssVowels = sVowels;
    sort(ssVowels.begin(), ssVowels.end());
    for (int i = 0; i < sVowels.size(); i++) {
      s[sVowels[i].second] = ssVowels[i].first;
    }
    return s;
  }
};
