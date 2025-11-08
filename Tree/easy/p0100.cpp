class Solution {
public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    queue<TreeNode*> qp, qq;
    qp.push(p); qq.push(q);

    while(!qp.empty() && !qq.empty()) {
      auto x = qp.front(); qp.pop();
      auto y = qq.front(); qq.pop();
      if (x && !y || !x && y || x && y && x->val != y->val)
        return false;
      if (x) {
        qp.push(x->left);
        qp.push(x->right);
      }
      if (y) {
        qq.push(y->left);
        qq.push(y->right);
      }
    }
    if (!qp.empty() || !qp.empty()) return false;
    return true;
  }
};

