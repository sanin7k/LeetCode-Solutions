class Solution {
public:
  int maxDepth(Node* root) {
    if(!root) return 0;
    
    int mxDepth = 0;
    for (auto& x : root->children) {
      mxDepth = max(mxDepth, maxDepth(x));
    }
    return 1 + mxDepth;
  }
};

