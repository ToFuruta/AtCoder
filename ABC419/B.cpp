#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, b;
  cin >> n;
  vector<int> q(n);
  vector<int> space;
  rep(i,n) {
    cin >> q[i];
    if (q[i] == 1) {
      cin >> b;
      space.push_back(b);
    }
    else {
      auto it = min_element(space.begin(), space.end());
      int mn = *it;
      space.erase(it);                                    
      cout << mn << endl;
    }
  }
  return 0;
}