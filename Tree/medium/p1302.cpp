class Solution {
private:
  int deepest(TreeNode* node) {
    if (!node) return 0;
    return 1 + max(deepest(node->left), deepest(node->right));
  }
  void levelSum(TreeNode* node, int level, int currentLevel, int &sum) {
    if (!node) return;

    if (currentLevel == level) sum += node->val;
    else {
      levelSum(node->left, level, currentLevel + 1, sum);
      levelSum(node->right, level, currentLevel + 1, sum);
    }
  }
public:
  int deepestLeavesSum(TreeNode* root) {
    int sum = 0;
    levelSum(root, deepest(root), 1, sum);
    return sum;
  }
};

