#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string S;
  cin >> S;
  bool flg = false;

  for (char c =  'a'; c <= 'z'; c++) {
    flg = true;
    rep(i, S.size()) {
      if (S[i] == c) {
        flg = false;
      }
    }
    if(flg) {
      cout << c << endl; 
      return 0;
    }
  }
  return 0;
}