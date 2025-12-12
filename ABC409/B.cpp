#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int ans = 0;
  for (int x = 0; x <= n; x++) {
    int cnt = 0;
    rep(i,n) if(x <= a[i]) cnt++;
    if (x <= cnt) ans = x;
  }
  cout << ans << endl;
  return 0;
}