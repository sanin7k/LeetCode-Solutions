class CustomStack {
private:
  vector<int> st;
  int maxSize;
public:
  CustomStack(int maxSize) : maxSize(maxSize) {
    this->st.reserve(maxSize);
  }
  
  void push(int x) {
    if (this->st.size() < maxSize)
      st.push_back(x);
  }

  int pop() {
    if (this->st.empty())
      return -1;
    int x = this->st.back(); this->st.pop_back();
    return x;
  }
    
  void increment(int k, int val) {
    for (int i = 0; i < k && i < st.size(); ++i) {
      st[i] += val;
    }
  }
};

