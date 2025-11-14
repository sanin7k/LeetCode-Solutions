class SmallestInfiniteSet {
private:
  set<int> pq;
  int i;
public:
  SmallestInfiniteSet() {
    i = 1;
  }

  int popSmallest() {
    int ans = this->i;
    if (!pq.empty()) {
      ans = *pq.begin();
      pq.erase(ans);
    } else {
        i++;
    }
    return ans;;
  }

  void addBack(int num) {
    if (num >= this->i) return;
    pq.insert(num);
  }
};

