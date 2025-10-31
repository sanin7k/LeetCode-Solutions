class Solution {
private:
  pair<TreeNode*, int> dfs(TreeNode* node) {
    if (!node) return { nullptr, 0 };

    auto [leftNode, leftDepth] = dfs(node->left);
    auto [rightNode, rightDepth] = dfs(node->right);

    if (leftDepth == rightDepth) {
      return {node, leftDepth + 1};
    } else if (leftDepth > rightDepth) {
      return {leftNode, leftDepth + 1};
    } else {
      return {rightNode, rightDepth + 1};
    }
  }
public:
  TreeNode* lcaDeepestLeaves(TreeNode* root) {
    return dfs(root).first;
  }
};

