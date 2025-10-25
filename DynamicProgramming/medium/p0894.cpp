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
public:
  unordered_map<int,vector<TreeNode*>>m;
  vector<TreeNode*> allPossibleFBT(int n) {
    vector<TreeNode*> ans;
    if (n % 2 == 0) return {};
    if (n == 1) return { new TreeNode(0) };
    if (m.count(n)) return m[n];
    for (int i = 1; i < n - 1; i += 2) {
      vector<TreeNode*> v1 = allPossibleFBT(i);
      vector<TreeNode*> v2 = allPossibleFBT(n - 1 - i);
      for (auto l : v1) {
        for (auto r : v2) {
          ans.push_back(new TreeNode(0, l, r));
        }
      }
    }
    return m[n] = ans;
  }
};

