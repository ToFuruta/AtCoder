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
  for (int i = 0; i < s.size(); i++) {
    for (int j = i+1; j < s.size(); j++) {
      if(s[i] == '#') {
        if (s[j] == '#') {
          s[i] = '.';
          s[j] = '.';
          cout << i+1 << ',' << j+1 << endl;
        }
      }
    }
  }
  return 0;
}