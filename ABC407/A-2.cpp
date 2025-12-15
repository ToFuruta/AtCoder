#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;

  cout << (2 * a + b) / (2 * b) << endl;
  return 0;
}