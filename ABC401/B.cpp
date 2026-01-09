#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  int cnt = 0;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  bool flg = false;
  for (int i = 0; i < n; i++) {
    if(s[i] == "login"){
      flg = true;
    }
    else if(s[i] == "logout"){
      flg = false;
    }
    else if(s[i] == "private"){
      if(flg != true) cnt++;
    }
  }
  cout << cnt;
  return 0;
}