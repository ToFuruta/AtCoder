#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<char> c(n);
  vector<ll> l(n);
  rep (i, n) cin >> c[i] >> l[i];
  string res;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l[i]; j++) {
      res.push_back(c[i]);
      if(res.size() > 100) break;
    }
    if(res.size() > 100) {
        res = "Too Long";
        break;
      }
  }
  cout << res;
  return 0;
}