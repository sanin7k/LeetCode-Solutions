class Solution {
private:
  void solve(TreeNode* root, TreeNode*& cur){
    if (!root) return;

    solve(root->left, cur);
    root->left = nullptr;
    cur->right = root;
    cur = cur->right;
    solve(root->right, cur);
  }
public:
  TreeNode* increasingBST(TreeNode* root) {
    TreeNode dummy(0);
    TreeNode* cur = &dummy;
    solve(root, cur);
    return dummy.right;
  }
};

