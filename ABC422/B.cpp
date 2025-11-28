#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  bool flg = true;
  cin >> h >> w;

  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if( s[i][j] == '#' ) {
        int cnt = 0;

        if (i - 1 >= 0 && s[i - 1][j] == '#') cnt++;
        if (i + 1 < h && s[i + 1][j] == '#') cnt++;
        if (j - 1 >= 0 && s[i][j - 1] == '#') cnt++;
        if (j + 1 < w && s[i][j + 1] == '#') cnt++;
        
        if (cnt != 2 && cnt != 4) flg = false;
      }
    }
  }

  if (flg) cout << "Yes";
  else cout << "No";
}