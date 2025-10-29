class Solution {
private:
  int sum = 0;
  void dfs(TreeNode* node) {
    if (!node) return;

    if ((node->val & 1) == 0) {
      if (node->left) {
        if (node->left->left) sum += node->left->left->val;
        if (node->left->right) sum += node->left->right->val;
      }
      if (node->right) {
        if (node->right->left) sum += node->right->left->val;
        if (node->right->right) sum += node->right->right->val;
      }
    }

    dfs(node->left);
    dfs(node->right);
  }
public:
  int sumEvenGrandparent(TreeNode* root) {
    dfs(root);
    return sum;
  }
};

