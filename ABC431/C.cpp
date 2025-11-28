#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int cnt = 0;

  vector<int> h(n);
  rep(i,n) cin >> h[i];
  sort(h.begin(), h.end());

  vector<int> b(m);
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(b.begin(), b.end());

  vector<int> h2(k);
  vector<int> b2(k);

  for (int i = 0; i < k; i++) {
    h2[i] = h[i];
    // cout << "h2 : " << h2[i] << endl;
  }
  for (int i = 1; i <= k; i++) {
    b2[i - 1] = b[(m -1) - (k - i)];
    // cout << "b2 : " << b2[i] << endl;
  }

  for (int i = 0; i < k; i++) {
    if (h2[i] <= b2[i]) cnt++;
  }

  // for (int i = 0; i < n; i++) {
  //   for(int j = 0; j < m; j++) {
  //     if (h[i] <= b[j]) {
  //       cnt++;
  //       h.erase(h.begin() + i);
  //       b.erase(b.begin() + j);
  //       n = n - 1;
  //       m = m - 1;
  //       break;
  //     }
  //   }
  // }
  // cout << cnt;
  if (cnt == k) cout << "Yes";
  else cout << "No";
}