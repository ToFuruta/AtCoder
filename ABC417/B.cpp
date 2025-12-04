#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i] == a[j]) {
        a.erase(a.begin() + j);
        b.erase(b.begin() + i);
        i = i - 1;
        j = j - 1;
        m = m-1;
        n = n-1;
        break;
      }
    }
  }
  rep(i,n) cout << a[i] << " ";
  return 0;
}