class Solution {
private:
    void inorder(TreeNode* node, vector<TreeNode*> &nodes) {
    if (!node) return;

    inorder(node->left, nodes);
    nodes.push_back(node); 
    inorder(node->right, nodes);
  }
  TreeNode* balance(vector<TreeNode*> &nodes, int start, int end) {
    if (start > end) return nullptr;
    int mid = start + ((end - start) >> 2);

    nodes[mid]->left = balance(nodes, start, mid - 1);
    nodes[mid]->right = balance(nodes, mid + 1, end);

    return nodes[mid];
  }
public:
  TreeNode* balanceBST(TreeNode* root) {
    vector<TreeNode*> vals;
    inorder(root, vals);
    return balance(vals, 0, vals.size() - 1);
  }
};

