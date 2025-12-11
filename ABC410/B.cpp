#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, q;
  int cnt = 0;
  cin >> n >> q;
  bool exitFlag = false;

  vector<int> x(q);
  rep(i,q) cin >> x[i];

  vector<int> res(n, 0);
  for (int i = 0; i < q; i++) {
    cnt = 0;
    exitFlag = false;
    if(x[i] >= 1){
      res[x[i]-1]++;
      cout << x[i] << " ";
    }
    else {
      while (true) {
        for (int k = 0; k < n; k++) {
          if (res[k] == cnt) {
            cout << k+1 << " ";
            res[k]++;
            exitFlag = true;
            break;
          }
        }
        if (exitFlag) break;
        cnt++;
      }
    } 
  }
  return 0;
}