class Solution {
private:
  void dfs(int current, TreeNode* root, int& sum) {
    if (!root) return;

    current = (current << 1) | root->val;
    if (!root->left && !root->right) {
      sum += current;
    }

    dfs(current, root->left, sum);
    dfs(current, root->right, sum);
  }
public:
  int sumRootToLeaf(TreeNode* root) {
    int sum = 0;
    dfs(0, root, sum);
    return sum;
  }
};

