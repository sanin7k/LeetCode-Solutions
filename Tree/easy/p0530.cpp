class Solution {
private:
  void inorder(TreeNode* root, int& prev, bool& hasPrev, int& mn) {
    if (!root) return;

    inorder(root->left, prev, hasPrev, mn);
    if (hasPrev)
      mn = min(mn, root->val - prev);
    prev = root->val;
    hasPrev = true;
    inorder(root->right, prev, hasPrev, mn);
  }
public:
  int getMinimumDifference(TreeNode* root) {
    int mn = INT_MAX;
    int prev = 0;
    bool hasPrev = false;
    inorder(root, prev, hasPrev, mn);
    return mn;
  }
};
