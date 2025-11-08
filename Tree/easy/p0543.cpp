class Solution {
private:
  int dfs (TreeNode* root, int& mx) {
    if (!root) return 0;

    int l = dfs(root->left, mx);
    int r = dfs(root->right, mx);
    
    mx = max(mx, l + r);
    return 1 + max(l, r);
  }
public:
  int diameterOfBinaryTree(TreeNode* root) {
    int mx = 0;
    dfs(root, mx);
    return mx;
  }
};

