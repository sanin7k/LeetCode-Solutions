#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    int moves = 0;

    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    for (int i = 0; i < seats.size(); i++) {
      moves += abs(seats[i] - students[i]);
    }
   
    return moves;
  }
}; 

int main() {
  vector<int> seats = {3,1,5};
  vector<int> students = {2,7,4};
  auto ans = Solution();
  cout << ans.minMovesToSeat(seats, students) << endl;
}
