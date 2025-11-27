#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, l, r;
  int cnt = 0;
  cin >> n >> l >> r;

  vector<int> x(n);
  vector<int> y(n);

  rep(i,n) cin >> x[i] >> y[i];
  
  rep(i, n) {
    if (x[i] <= l && y[i] >= r) cnt++;
  }

  cout << cnt;
  return 0;
}