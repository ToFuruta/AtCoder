#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  rep(i,s.size()) {
    if (s[i] == '2') cnt++;
  }
  rep(i, cnt) cout << "2";
  return 0;
}