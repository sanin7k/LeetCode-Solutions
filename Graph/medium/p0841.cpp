class Solution {
public:
  bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int n = rooms.size();
    vector<bool> visited(n, false);
    queue<int> q;
    visited[0] = true;
    q.push(0);
    while (!q.empty()) {
      int x = q.front();
      q.pop();
      for (int& n : rooms[x]) {
        if (!visited[n]) {
          q.push(n);
          visited[n] = true;
        }
      }
    }
    for (bool x : visited)
      if (!x) return false;
    return true;
  }
};

