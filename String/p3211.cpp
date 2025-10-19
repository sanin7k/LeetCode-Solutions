class Solution {
public:
  vector<string> validStrings(int n) {
    vector<string> ans;
    if (n == 1)
      ans.push_back("0");
    for (int i = 1; i < pow(2, n); i++) {
      int j = i;
      bool flag = true;
      for(int k = 1; k < n; k++) {
        if (j % 4 == 0) {
          flag = false;
          break;
        }
        j >>= 1;
      }
      if (flag)
        ans.push_back(format("{:0{}b}", i, n));
    }
    return ans;
  }
};
