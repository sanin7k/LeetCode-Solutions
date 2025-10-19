class Solution {
public:
  int minPartitions(string n) {
    int ans = 0;
    for (char x : n) {
      int val = x - '0';
      if (val > ans)
        ans = val;
    }
    return ans;
  }
};
