#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int s;
  cin >> s;
  if(s >= 200 && s <= 299) cout << "Success";
  else cout << "Failure";
  return 0;
}