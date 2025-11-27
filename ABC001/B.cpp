#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int m;
  string vv;
  cin >> m;
  if (m < 100) vv = "00";
  else if (m >= 100 && m < 1000) {
    vv = "0" + to_string(m / 100);
  }
  else if (m >= 100 && m <= 5000) {
    int x = m / 100;
    if (x < 10) vv = "0" + to_string(x);
    else vv = to_string(x);
  }
  else if (m >= 6000 && m <= 30000) {
    vv = to_string(50 + (m / 1000));
  }
  else if (m >= 35000 && m <= 70000) {
    vv = to_string((((m / 1000) - 30) / 5) + 80);
  }
  else if (m > 70000) vv = "89";
  cout << vv << endl;
}