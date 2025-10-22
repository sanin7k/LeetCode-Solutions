class Solution {
public:
  int minSteps(string s, string t) {
    int result = 0;
    int n = s.size();
    vector<int> sFreq(26, 0);
    vector<int> tFreq(26, 0);
    for (int i = 0; i < n; i++) {
      sFreq[s[i] - 'a'] += 1;
      tFreq[t[i] - 'a'] += 1;
    }
    for (int i = 0; i < 26; i++) {
      result += abs(sFreq[i] - tFreq[i]);
    }
    return result / 2;
  }
};
