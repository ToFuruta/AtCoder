#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin >> s;
  if(s[0] == '.') s[0] = 'o';
  rep(i,s.size()-1){
    if(s.substr(i,2) == "#.") s[i+1] = 'o';
  }
  cout << s;
  return 0;
}