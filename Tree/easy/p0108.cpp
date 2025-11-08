class Solution {
private:
  TreeNode* solve(vector<int>& nums, int start, int end) {
    if (start > end) return nullptr;

    int mid = start + (end - start) / 2;
    TreeNode* node = new TreeNode(nums[mid]);
    node->left = solve(nums, start, mid - 1);
    node->right = solve(nums, mid + 1, end);

    return node;
  }
public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    return solve(nums, 0, nums.size());
  }
};

