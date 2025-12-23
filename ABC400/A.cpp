#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int a;
  cin >> a;
  if (400 % a == 0) cout << 400 / a;
  else cout << -1;
  return 0;
}