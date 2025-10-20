class Solution {
public:
  int numTilePossibilities(string tiles) {
    set<string> seqs;
    generate("", seqs, tiles);
    return seqs.size();
  }

  void generate(string s, set<string> &seqs, string tiles) {
    if (!s.empty()) {
      seqs.insert(s);
    }

    for (int i = 0; i < tiles.size(); i++) {
      string remaining = tiles.substr(0, i) + tiles.substr(i + 1);
      generate(s + tiles[i], seqs, remaining);
    }
  }
};
