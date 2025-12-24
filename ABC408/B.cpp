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
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  set<int> s;
  rep(i,n) {
    s.insert(a[i]);
  }
  vector<int> sorted_s(s.begin(), s.end());

  cout << sorted_s.size() << endl;
  rep(i,sorted_s.size()) {
    cout << sorted_s[i] << " ";
  }
  return 0;
}