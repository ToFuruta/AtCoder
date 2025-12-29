#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;


int count_diff(vector<string>s, vector<string>t){
  int n = s.size();
  int ans = 0;
  for(int i = 0; i < n; i++)for(int j = 0; j < n; j++)if(s[i][j] != t[i][j]) ans++;
  return ans;
}

vector<string> right_rot90(vector<string>s){
  int n = s.size();
	vector<string>ret(n, string(n,'.'));
	for(int i = 0; i < n; i++)for(int j = 0; j < n; j++) ret[i][j] = s[n-1-j][i];
	return ret;
}

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  rep(i,n) cin >> s[i];
  rep(i,n) cin >> t[i];
  int ans = 1e9;
	for(int rot_count = 0; rot_count < 4; rot_count++){
		ans = min(ans, count_diff(s,t) + rot_count);
		s = right_rot90(s);
	}
	cout << ans << endl;
}