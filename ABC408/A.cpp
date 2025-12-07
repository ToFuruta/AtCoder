#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, s;
  cin >> n >> s;
  vector<int> t(n+1,0);
  for(int i = 1; i <= n; i++) cin >> t[i];

  for(int i = 1; i <= n; i++) {
    if (t[i] - t[i-1] >= s + 0.5) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}