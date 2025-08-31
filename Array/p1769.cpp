#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> minOperations(string boxes) {
    vector<int> answer(boxes.size(), 0);

    for (int i = 0; i < answer.size(); i++) {
      for (int j = 0; j < boxes.size(); j++) {
        if (i == j) continue;
        if (boxes[j] == '1')
          answer[i] += abs(i - j);
      }
    }
    return answer;
  }
};

int main() {
  string boxes = "001011";

  Solution ans = Solution();
  vector<int> a = ans.minOperations(boxes);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
