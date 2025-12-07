#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  string tmp;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  set<string> res;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(i != j) {
        tmp = s[i] + s[j];
        res.insert(tmp);
      }
    }
  }
  cout << res.size();
  return 0;
}