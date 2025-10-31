class Solution {
public:
  TreeNode* removeLeafNodes(TreeNode* root, int target) {
    if (!root) return nullptr;

    root->left = removeLeafNodes(root->left, target);
    root->right = removeLeafNodes(root->right, target);

    if (root->val == target && !root->left && !root->right) {
      return nullptr;
    }
    return root;
  }
};

