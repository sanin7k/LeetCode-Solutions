class Solution {
private:
  void inorder(TreeNode* root, vector<int>& res) {
    if (!root) return;

    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
  }
public:
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res;
    inorderTraversal(root, res);
    return res;
  }
};

