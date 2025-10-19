class Solution {
public:
  string smallestNumber(string pattern) {
    int n = pattern.size();
    string ans;
    vector<int> nums;
    for (int i = 1; i <= n + 1; ++i) {
      nums.push_back(i);
    }
    for (int j = 0; j <= n; j++) {
      for (int i = j % 2; i < n; i += 2) {
        if (pattern[i] == 'I') {
          if (nums[i] > nums[i + 1]){
            swap (nums[i], nums[i + 1]);
          }
        } else {
          if (nums[i] < nums[i + 1]){
            swap (nums[i], nums[i + 1]);
          }
        }
      }
    }
    for (int x : nums) ans += to_string(x);
    return ans;
  }
};
