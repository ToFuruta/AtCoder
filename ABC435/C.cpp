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
  int cnt = 0;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int r = 0;
  rep(i,n) {
    if(i > r) break;
    r = max(r, i + a[i] - 1);
    cnt++;
  }
  cout << cnt;
  return 0;
}