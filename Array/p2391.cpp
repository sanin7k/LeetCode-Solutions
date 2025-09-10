#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int time = 0;
    vector<int> cumulativeTravel(travel.size() + 1, 0);
    for(int i = 1; i < travel.size() + 1; i++) {
      cumulativeTravel[i] = cumulativeTravel[i - 1] + travel[i - 1];
    }
    for (auto x : cumulativeTravel) {
      cout << x << " ";
    }
    cout << endl;
    for (auto x : "MPG") {
      int lastStop = 0;
      int xUnits = 0;
      for (int i = 0; i < garbage.size(); i++) {
        int units = count(garbage[i].begin(), garbage[i].end(), x);
        if (units > 0) lastStop = i;
        xUnits += units;
      }
      time += cumulativeTravel[lastStop] + xUnits;
    }
    return time;
  }
};

int main() {
  vector<string> garbage = {"G","P","GP","GG"};
  vector<int> travel = {2,4,3};

  Solution sol = Solution();
  int ans = sol.garbageCollection(garbage, travel);

  cout << ans << endl;
}
