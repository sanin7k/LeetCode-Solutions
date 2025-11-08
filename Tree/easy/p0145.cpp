class Solution {
private:
  void solve(TreeNode* root, vector<int>& nodes) {
    if (!root) return;

    solve(root->left, nodes);
    solve(root->right, nodes);
    nodes.push_back(root->val);
  }
public:
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> nodes;
    solve(root, nodes);
    return nodes;
  }
};

