class Solution {
public:
  int pairSum(ListNode* head) {
    int n = 0;
    for (ListNode* curr = head; curr; curr = curr->next) ++n;

    stack<ListNode*> st;
    ListNode* curr = head;
    for (int i = 0; i < n / 2; ++i) {
      st.push(curr);
      curr = curr->next;
    }

    int mx = 0;
    while (!st.empty()) {
      mx = max(mx, curr->val + st.top()->val); st.pop();
      curr = curr->next;
    }
    return mx;
  }
};

