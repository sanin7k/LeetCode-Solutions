#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int count = 0;
    for (auto x : hours) {
      if (x >= target)
        count++;
    }
    return count;
  }
};

int main() {
  vector<int> hours = {0,1,2,3,4};
  int target = 2;

  Solution ans = Solution();
  int a = ans.numberOfEmployeesWhoMetTarget(hours, target);
  cout << a << endl;
}
