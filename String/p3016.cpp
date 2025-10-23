class Solution {
public:
  int minimumPushes(string word) {
    vector<int> freq(26, 0);
    for (char x : word) {
      freq[x - 'a'] += 1;
    }
    priority_queue<int> pq(freq.begin(), freq.end());
    int pushes = 0, i = 0;
    while (!pq.empty()) {
      if (i < 8) {
        pushes += pq.top();
      } else if (i < 16) {
        pushes += 2 * pq.top();
      } else if (i < 24) {
        pushes += 3 * pq.top();
      } else {
        pushes += 4 * pq.top();
      }
      pq.pop();
      i++;
    }
    return pushes;
  }
};
