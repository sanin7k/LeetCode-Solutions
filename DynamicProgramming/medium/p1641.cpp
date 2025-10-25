class Solution {
public:
  unordered_map<string, int> m;
  int count (int n, char last) {
    if (n == 0) return 1;
    string key = to_string(n) + last;
    if (m.count(key)) return m[key];
    int c = 0;
    for (char v : string("aeiou")) {
      if (last <= v) {
        c += count(n - 1, v);
      }
    }
    return m[key] = c;
  }

  int countVowelStrings(int n) {
    return count(n, 'a');
  }
};

