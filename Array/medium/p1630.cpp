class Solution {
public:
  vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool> ans;
    for (int i = 0; i < l.size(); ++i) {
      vector<int> sub(nums.begin() + l[i], nums.begin() + r[i] + 1);
      sort(sub.begin(), sub.end());
      bool flag = true;
      int d = sub[1] - sub[0];
      for (int j = 1; j < r[i] - l[i]; ++j) {
        if (sub[j + 1] - sub[j] != d){
            flag = false;
            break;
        }
      }
      ans.push_back(flag);
    } 
    return ans;
  }
};

