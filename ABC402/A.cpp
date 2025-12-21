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
  string ans;
  for (int i = 0; i < s.length(); i++) {
    if (isupper(s[i])) {
      ans.push_back(s[i]);
    }
  }
  rep(i, ans.size()){
    cout << ans[i];
  }
  return 0;
}