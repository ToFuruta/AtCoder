#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  int cnt = 0;

  for(int i = 0; i < n; i++) {
    if (l[i] == 1) {
      cnt = n - (i+1);
      break;
    }
  }

  for(int i = n-1; i >= 0; i--) {
    if (l[i] == 1) {
      cnt = cnt - (n - (i+1));
      break;
    }
  }
  cout << cnt;

  return 0;
}