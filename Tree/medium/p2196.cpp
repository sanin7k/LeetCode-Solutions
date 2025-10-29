/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *   int val;
 *   TreeNode *left;
 *   TreeNode *right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
  unordered_map<int, TreeNode*> m;
public:
  TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
    unordered_set<int> children;
    for (auto x : descriptions) {
      if (!m[x[0]]) {
         m[x[0]] = new TreeNode(x[0]);
      }

      if (!m[x[1]]) {
        m[x[1]] = new TreeNode(x[1]);
      }
      
      if (x[2]) {
        m[x[0]]->left = m[x[1]];
      } else {
        m[x[0]]->right = m[x[1]];
      }

      children.insert(x[1]);
    }
    TreeNode* root;
    for (auto x : m) {
      if (!children.count(x.first)) {
        root = x.second;
        break;
      }
    }
    return root;
  }
};

