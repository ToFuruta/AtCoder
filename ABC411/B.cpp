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
  int res = 0;
  cin >> n;
  vector<int> d(n-1);
  rep(i,n-1) cin >> d[i];
  for(int i = 0; i < n-1; i++) {
    res = 0;
    for (int j = i; j < n-1; j++) {
      res += d[j];
      cout << res << ' ';
    }
    cout << endl;
  }
  return 0;
}