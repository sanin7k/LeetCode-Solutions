class Solution {
public:
  TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    if (!original) return nullptr;
    
    if (original == target) return cloned;
    if (auto* x = getTargetCopy(original->left, cloned->left, target)) return x;
    return getTargetCopy(original->right, cloned->right, target);
  }
};

