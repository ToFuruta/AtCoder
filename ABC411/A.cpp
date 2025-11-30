#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string p;
  int l;
  cin >> p >> l;

  if (p.size() >= l) cout << "Yes";
  else cout << "No";
  return 0;
}