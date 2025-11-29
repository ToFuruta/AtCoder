#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  vector<ll> a(10);
  cin >> a[0] >> a[1];
  for(int i = 2; i < 10; i++) {
    string S = to_string(a[i-2] + a[i-1]);
    reverse(S.begin(), S.end()); 
    a[i] = stoll(S);
  }
  cout << a[9] << endl;
  return 0;
}