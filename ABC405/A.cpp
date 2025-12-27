#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int r, x;
  cin >> r >> x;
  if (r >= 1600 && r <= 2999) {
    if (x == 1) {
      cout << "Yes";
      return 0;
    }
  }
  if (r >= 1200 && r <=2399) {
    if (x == 2) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}