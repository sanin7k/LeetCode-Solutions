class Solution {
public:
  int numTeams(vector<int>& rating) {
    int n = rating.size();
    int count = 0;
    for (int i = 0; i < n; ++i) {
      int ls = 0, ll = 0;
      int rs = 0, rl = 0;

      for (int j = 0; j < i; ++j) {
        if (rating[j] < rating[i]) ls++;
        else if (rating[j] > rating[i]) ll++;
      }
      for (int k = i + 1; k < n; ++k) {
        if (rating[k] < rating[i]) rs++;
        else if (rating[k] > rating[i]) rl++;
      }
      count += ls * rl + ll * rs;
    }
    return count;
  }
};

