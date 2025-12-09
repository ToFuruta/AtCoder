#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int a,b;
  double ab, ab2;
  int res;
  cin >> a >> b;

  ab = (double)a / b;
  ab2 = (double)(ab - (int)ab); 
  if (ab2 > 0.5) res = (int)ab + 1;
  else res = (int)ab;

  cout << res;
  
  return 0;
}