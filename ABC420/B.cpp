#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  int cnt0 = 0;
  int cnt1 = 0;
  cin >> n >> m;

  vector<string> s(n);
  rep(i,n) cin >> s[i];

  vector<int> ply(n);
  
  for (int i = 0; i < m; i++) {
    cnt0 = 0;
    cnt1 = 0;
    for (int j = 0; j < n; j++) {
      if(s[j][i] == '0') cnt0++;
      else cnt1++;
    }

    if (cnt0 == 0 || cnt1 == 0) {
      for (int i = 0; i < n; i++) {
        ply[i]++;
      }
    }
    else if(cnt0 < cnt1) {
      for (int j = 0; j < n; j++) {
        if(s[j][i] == '0') ply[j]++;
      }
    }
    else {
      for (int j = 0; j < n; j++) {
        if(s[j][i] == '1') ply[j]++;
      }
    }
  }
  int mx = *max_element(ply.begin(), ply.end());
  for (int i = 0; i < n; i++){
    if (ply[i] == mx) cout << i + 1 << " ";
  }
  return 0;
}