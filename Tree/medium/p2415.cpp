class Solution {
private:
  void dfs(TreeNode* left, TreeNode* right, int level) {
    if (!left || !right) return;

    if ((level & 1) == 1) 
      swap(left->val, right->val);

    dfs(left->left, right->right, level + 1);
    dfs(left->right, right->left, level + 1);

  }
public:
  TreeNode* reverseOddLevels(TreeNode* root) {
    dfs(root->left, root->right, 1);
    return root;
  }
};

