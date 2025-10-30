class Solution {
private:
  void inorder(TreeNode* node, vector<int>& list){
    if (!node) return;

    inorder(node->left, list);
    list.push_back(node->val);
    inorder(node->right, list);
  }
public:
  vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<int> list1, list2;
    inorder(root1, list1);
    inorder(root2, list2);
    
    vector<int> list;
    list.reserve(list1.size() + list2.size());

    int i1 = 0, i2 = 0;
    while (i1 < list1.size() && i2 < list2.size()) {
      if (list1[i1] < list2[i2]) list.push_back(list1[i1++]);
      else list.push_back(list2[i2++]); 
    }

    while (i1 < list1.size()) list.push_back(list1[i1++]);
    while (i2 < list2.size()) list.push_back(list2[i2++]); 

    return list;
  }
};

