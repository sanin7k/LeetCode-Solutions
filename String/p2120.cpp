class Solution {
public:
  vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
    int m = s.size();
    vector<int> answer;
    for (int i = 0; i < m; i++) {
      vector<int> pos = startPos;
      int steps = 0;
      bool flag = true;
      for (int j = i; j < m && flag; j++) {
        switch (s[j]) {
          case 'L':
            if (pos[1] - 1 >= 0) {
              steps += 1;
              pos[1] -= 1;
            } else flag = false;
            break;
          case 'R':
            if (pos[1] + 1 < n) {
              steps += 1;
              pos[1] += 1;
            } else flag = false;
            break;
          case 'U':
            if (pos[0] - 1 >= 0) {
              steps += 1;
              pos[0] -= 1;
            } else flag = false;
            break;
          case 'D':
            if (pos[0] + 1 < n) {
              steps += 1;
              pos[0] += 1;
            } else flag = false;
            break;
          default:
            break;
        }
      }
      answer.push_back(steps);
    }
    return answer;
  }
};
