class Solution {
private:
  void solve(TreeNode* root, vector<int>& nodes) {
    if (!root) return;

    nodes.push_back(root->val);
    solve(root->left, nodes);
    solve(root->right, nodes);
  }
public:
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    solve(root, ans);
    return ans;
  }
};

