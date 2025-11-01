class Solution {
public:
  int partitionString(string s) {
    int c = 1;
    int mask = 0;

    for (auto ch : s) {
      int bit = 1 << (ch - 'a');
      if (bit & mask) {
        c++;
        mask = 0;
      }
      mask |= bit;
    }
    return c;
  }
};

