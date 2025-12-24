#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;
  int cnt = 0;
  double ans;
  for (int i = 1; i < 7; i++){
    for (int j = 1; j < 7; j++) {
      if(i+j >= x || abs(i-j) >= y) cnt++;
    }
  }
  ans = (double) cnt / 36.0;
  cout << setprecision(10) << ans << "\n";
  return 0;
}