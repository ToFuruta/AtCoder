#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s,t;
  bool flg = true;
  cin >> s >> t;
  for(int i = 1; i < s.size(); i++){
    if (isupper(s[i])){
      for (int j = 0; j < t.size(); j++) {
        if (t.find(s[i-1]) == string::npos) {
          flg = false;
          break;
        }
      }
    }

  }
  if(flg) cout << "Yes";
  else cout << "No";
  return 0;
}