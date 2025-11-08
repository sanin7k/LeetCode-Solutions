class Solution {
private:
  void dfs(string current, TreeNode* root, vector<string>& paths) {
    if (!root) return;
    current += to_string(root->val);
    if (!root->right && !root->left) {
      paths.push_back(current);
    } else {
      current += "->";
      dfs(current, root->left, paths);
      dfs(current, root->right, paths);
    }
  }
public:
  vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    dfs("", root, ans);
    return ans;
  }
};

