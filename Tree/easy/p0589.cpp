class Solution {
private:
  void solve(Node* root, vector<int>& nodes) {
    if (!root) return;

    nodes.push_back(root->val);
    for (auto&x : root->children) {
      solve(x, nodes);
    }
  }
public:
  vector<int> preorder(Node* root) {
    vector<int> nodes;
    solve(root, nodes);
    return nodes;
  }
};

