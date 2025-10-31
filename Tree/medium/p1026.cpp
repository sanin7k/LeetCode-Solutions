class Solution {
private:
  int dfs(TreeNode *root, int& currMin, int& currMax) {
    if (!root) return currMax - currMin;

    currMin = min(currMin, root->val);
    currMax = max(currMax, root->val);

    return max(dfs(root->left, currMin, currMax), dfs(root->right, currMin, currMax));
  }
public:
  int maxAncestorDiff(TreeNode* root) {
    return dfs(root, root->val, root->val);
  }
};

