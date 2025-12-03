#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll n, sum = 0, res = 0, res2 = 0;
  cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  
  for (int i = 0; i < n-1; i++) {
    sum += a[i];
    res = sum * a[i+1];
    res2 += res;
  }
  cout << res2;
  return 0;
}