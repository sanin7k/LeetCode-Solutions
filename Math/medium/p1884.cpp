class Solution {
public:
  int twoEggDrop(int n) {
    int i;
    for (i = 0; n > 0; ++i) {
      n -= i;
    }
    return i - 1;
  }
};

