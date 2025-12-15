#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int q;
  cin >> q;
  int num;
  char c;
  bool flg = true;
  vector<string> ans;
  for (int i = 0; i < q; i++) {
    cin >> num;
    if (num == 1){
      cin >> c;
      ans.push_back(string(1, c));
    } 
    else {
      ans.pop_back();
    }
    if(flg) cout << "Yes";
    else cout << "No";
  }
  
  return 0;
}