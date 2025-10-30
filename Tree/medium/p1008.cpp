class Solution {
private:
  TreeNode* build(vector<int>& preorder, int minVal, int maxVal, int& i) {
    if (i >= preorder.size() || preorder[i] < minVal || preorder[i] > maxVal) return nullptr;

    TreeNode* node = new TreeNode(preorder[i++]);
    node->left = build(preorder, minVal, node->val, i);
    node->right = build(preorder, node->val, maxVal, i);
    return node;
  }

public:
  TreeNode* bstFromPreorder(vector<int>& preorder) {
    int i = 0;
    return build(preorder, INT_MIN, INT_MAX, i);
  }
};

