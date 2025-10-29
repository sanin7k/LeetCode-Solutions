class Solution {
private:
  int count = 0;
public:
  pair<int, int> dfs (TreeNode* node) {
    if (!node) return {0, 0};

    auto [leftSum, l] = dfs(node->left);
    auto [rightSum, r] = dfs(node->right);

    if ((node->val + leftSum + rightSum) / (1 + l + r) == node->val) count++;
    return {node->val + leftSum + rightSum, 1 + l + r};
  }

  int averageOfSubtree(TreeNode* root) {
    dfs(root);
    return count;
  }
};

