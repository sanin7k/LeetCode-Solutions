class Solution {
public:
  bool isUnivalTree(TreeNode* root) {
    int val = root->val;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      auto node = q.front(); q.pop();
      if (node->val != val) return false;
      if (node->left)
        q.push(node->left);
      if (node->right)
        q.push(node->right);
    }
    return true;
  }
};

