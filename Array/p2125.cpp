#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numberOfBeams(vector<string>& bank) {
    int n = bank.size();
    int beams = 0;
    for (int i = 0; i < n - 1; i++) {
      int idevs = count(bank[i].begin(), bank[i].end(), '1');
      for (int j = i + 1; j < n; j++) {
        int jdevs = count(bank[j].begin(), bank[j].end(), '1');
        if (jdevs == 0) continue;
        beams += idevs * jdevs;
        i = j - 1;
        break;
      }
    }
    return beams;
  }
};

int main() {
  vector<string> bank = {"011001","000000","010100","001000"};

  Solution sol = Solution();
  int ans = sol.numberOfBeams(bank);

  cout << ans << endl;
}
