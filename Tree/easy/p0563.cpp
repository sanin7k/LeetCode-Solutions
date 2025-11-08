class Solution {
private:
  int dfs(TreeNode* root, int& sum) {
    if (!root) return 0;

    int lSum = dfs(root->left, sum);
    int rSum = dfs(root->right, sum);

    sum += abs(lSum - rSum);
    
    return root->val + lSum + rSum;
  }
public:
  int findTilt(TreeNode* root) {
    int sum = 0;
    dfs(root, sum);
    return sum;
  }
};

