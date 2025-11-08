class Solution {
public:
  bool isSymmetric(TreeNode* root) {
    queue<TreeNode*> q, revQ;
    q.push(root); revQ.push(root);

    while (!q.empty() && !q.empty()){
      auto x = q.front(); q.pop();
      auto revX = revQ.front(); revQ.pop();
      if (!x && revX || x && !revX || x && revX && x->val != revX->val) return false;
      
      if(x) {
        q.push(x->left);
        q.push(x->right);
      }
      if(revX){
        revQ.push(revX->right);
        revQ.push(revX->left);
      }
    }
    if (!q.empty() || !q.empty()) return false;
    return true;
  }
};

