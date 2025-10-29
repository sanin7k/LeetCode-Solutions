class Solution {
private:
  int reverseNum(int n) {
    int rev = 0;
    while (n) {
      rev = rev * 10 + n % 10;
      n /= 10;
    }
    return rev;
  }
public:
  int countDistinctIntegers(vector<int>& nums) {
    int n = nums.size();
    unordered_set<int> set; 
    for (auto &x : nums) {
      set.insert(x);
      set.insert(reverseNum(x));
    }
    return set.size();
  }
};

