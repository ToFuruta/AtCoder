#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, cnt = 0;
  cin >> n;
  int a, b;
  rep(i,n) {
    cin >> a >> b;
    if (a < b) cnt++;
  }
  cout << cnt;
  return 0;
}