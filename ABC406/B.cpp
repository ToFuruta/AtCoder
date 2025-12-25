#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a > c) cout << "Yes";
  else if (a == c && b > d) cout << "Yes";
  else cout << "No";
  return 0;
}