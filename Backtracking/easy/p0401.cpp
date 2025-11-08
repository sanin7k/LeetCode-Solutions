class Solution {
private:
  void backtrack(int idx, int left, int mask, vector<string>& readings) {
    if (left == 0) {
      int minutes = mask & 63;
      int hours = mask >> 6;
      if (hours < 12 && minutes < 60) {
        string s = to_string(hours) + ":";
        if (minutes < 10) s += "0";
        s += to_string(minutes);
        readings.push_back(s);
      }
      return;
    }
    if (idx == 10) return;

    backtrack(idx + 1, left - 1, mask | (1 << idx), readings);
    backtrack(idx + 1, left, mask, readings);
  }
public:
  vector<string> readBinaryWatch(int turnedOn) {
    vector<string> readings;
    backtrack(0, turnedOn, 0, readings);
    return readings;
  }
};

