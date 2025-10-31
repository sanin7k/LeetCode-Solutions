class Solution {
private:
  bool flag = true;
  void inorder(TreeNode* root, int& k, int& ans) {
    if (!root || !flag) return;

    inorder(root->left, k, ans);
    if (--k == 0) {
      ans = root->val;
      flag = false;
      return;
    }
    inorder(root->right, k, ans);
  }
public:
  int kthSmallest(TreeNode* root, int k) {
    int ans;
    inorder(root, k, ans);
    return ans;
  }
};

