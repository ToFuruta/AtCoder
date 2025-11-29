#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n = 10;
  int x, y;
  cin >> x >> y;
  vector<ll> a(n);
  a[0] = x;
  a[1] = y;

  for (int i = 2; i < n; i++) {
    a[i] = a[i-2] + a[i-1];
    if (a[i] >=10) {
      string S = to_string(a[i]);
      reverse(S.begin(), S.end()); 
      a[i] = stoll(S);
    }
  }
  
  cout << a[n-1] << endl;
}