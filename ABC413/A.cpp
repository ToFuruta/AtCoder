#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  int sum = 0;
  cin >> n >> m;

  vector<int> a(n);
  rep(i,n) cin >> a[i];

  rep(i,n) sum += a[i];

  if (sum <= m) cout << "Yes";
  else cout << "No";
}