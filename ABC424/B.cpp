#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> a(k);
  vector<int> b(k);

  for (int i = 0; i < k; i++) cin >> a[i] >> b[i];

  vector<int> cnt(n + 1, 0);

  for (int i = 0; i < k; i++) {
    cnt[a[i]]++;
    if (cnt[a[i]] == m) cout << a[i] << " ";
  }

  return 0;
}