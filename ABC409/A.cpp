#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  string t, a;
  cin >> n >> t >> a;
  rep(i,n) if(t[i] == 'o' && a[i] =='o') {
    cout << "Yes";
    return 0;
  }
  cout << "No";
  return 0;
}