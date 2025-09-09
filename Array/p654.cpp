#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
  TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    if (nums.size() == 0) return nullptr;
    if (nums.size() == 1) return new TreeNode(nums[0]);
    auto x = max_element(nums.begin(), nums.end());
    vector<int> sub1;
    if (nums.begin() != x) {
        sub1 = vector<int>(nums.begin(), x);
    }
    vector<int> sub2;
    if (x + 1 != nums.end()) {
        sub2 = vector<int>(x + 1, nums.end());
    }
    return new TreeNode(*x, constructMaximumBinaryTree(sub1), constructMaximumBinaryTree(sub2));
  }
};

int main() {
  vector<int> nums = {3,2,1,6,0,5};

  auto sol = Solution();
  TreeNode* ans = sol.constructMaximumBinaryTree(nums);

  // printTree(ans);
}

