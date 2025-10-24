class Solution {
public:
  int maxRepeating(string sequence, string word) {
    if (word.empty()) return 0;
    string temp = word;
    int count = 0;
    while (sequence.find(temp) != string::npos){
        count++;
        temp += word;
    }
    return count;
  }
};
