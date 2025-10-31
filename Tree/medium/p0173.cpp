class BSTIterator {
private:
  int i = 0;
  vector<int> values;
  void inorder(TreeNode* root) {
    if (!root) return;

    inorder(root->left);
    values.push_back(root->val);
    inorder(root->right);
  }
public:
  BSTIterator(TreeNode* root) {
    inorder(root);
  }

  int next() {
    return values[i++];
  }

  bool hasNext() {
    return i + 1 < values.size();
  }
};

