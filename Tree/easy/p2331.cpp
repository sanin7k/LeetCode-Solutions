class Solution {
public:
  bool evaluateTree(TreeNode* root) {
    if (!root->left) return root->val == 1;

    if (root->val == 2 && (root->left->val == 1 || root->right->val == 1)) {
      return true;
    } else if (root->val == 3 && (root->left->val == 0 || root->right->val == 0)) {
      return false;
    }

    bool l = evaluateTree(root->left);
    bool r = evaluateTree(root->right);

    if (root->val == 2) root->val = l || r;
    else if (root->val == 3) root->val = l && r;
    
    return root->val;
  }
};

