#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, k;
  int cnt = 0;
  cin >> n;

  vector<int> a(n);
  rep(i,n) cin >> a[i];

  cin >> k;

  rep(i,n) {
    if (a[i] >= k) cnt++;
  }
  
  cout << cnt;
  return 0;
}