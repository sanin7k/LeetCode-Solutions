class Solution {
public:
  int twoEggDrop(int n) {
    int a, b = n;
    for (int i = 0; n > 0; ++i) {
      a = n;
      n -= i;
      b = n;
    }
    return a - b;
  }
};

