class Solution {
public:
  vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
    int n = nums.size();
    int max = pow(2, maximumBit) - 1;
    vector<int> answer(n, 0);
    answer[n - 1] = nums[0] ^ max;
    for (int i = n - 2; i >= 0; i--) {
      answer[i] = answer[i + 1] ^ nums[n - 1 - i];
    }
    return answer;
  }
};
