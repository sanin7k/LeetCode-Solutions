class Solution {
public:
  vector<int> pathInZigZagTree(int label) {
    vector<int> labels;

    int level = 0;
    while((1 << level) <= label) level++;

    while(label >= 1) {
      labels.push_back(label);
      int start = 1 << (level - 1);
      int end = (1 << level) - 1;

      label = (start + end - label) / 2;
      level--;
    }
    
    reverse(labels.begin(), labels.end());
    return labels;
  }
};

