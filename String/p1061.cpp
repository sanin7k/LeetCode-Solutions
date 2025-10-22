class Solution {
public:
  string smallestEquivalentString(string s1, string s2, string baseStr) {
    int n = s1.size();
    vector<vector<int>> mat(26, vector<int>(26, 0));
    for (int i = 0; i < 26; i++) 
      mat[i][i] = 1;
    for (int i = 0; i < n; i++) {
      mat[s1[i] - 'a'][s2[i] - 'a'] = 1;
      mat[s2[i] - 'a'][s1[i] - 'a'] = 1;
    }
    for (int k = 0; k < 26; ++k) {
      for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
          mat[i][j] = mat[i][j] || (mat[i][k] && mat[k][j]);
        }
      }
    }
    string res = "";
    for (auto x : baseStr) {
      char ch;
      for (int i = 0; i < 26; i++) {
        if (mat[x - 'a'][i] == 1) {
          ch = i + 'a';
          break;
        }
      }
      res += ch;
    }
    return res;
  }
};
