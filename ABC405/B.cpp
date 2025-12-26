#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep (i, n) cin >> a[i];
  int ans = 0;
  bool flg = true;
  while(flg) {
    vector<int> b = a;
    sort(b.begin(), b.end());
    set<int> s(b.begin(), b.end());
    for (int i = 1; i <= m; i++) {
      if (!s.count(i)) {
        flg = false;
        break;
      }
    }
    if (flg == false) break;
    a.pop_back();
    ans++;
  }
  cout << ans;
  return 0;
}