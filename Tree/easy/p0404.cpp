class Solution {
private:
  void dfs(TreeNode* root, int& sum) {
    if (!root) return;

    if (root->left && !root->left->left && !root->left->right)
      sum += root->left->val;

    dfs(root->left, sum);
    dfs(root->right, sum);
  }
public:
  int sumOfLeftLeaves(TreeNode* root) {
    int sum = 0;
    dfs(root, sum);
    return sum;
  }
};

