#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  set<int> st;
  for (int i = 1; i <= n; i++) st.insert(i); // iからnまでをセット
  rep (i,n) {
    if (a[i] != -1) st.erase(a[i]); 
  }
  rep(i,n) {
    if (a[i] == -1) {
      a[i] = *st.begin(); // st の前から入れていく
      st.erase(st.begin());
    }
  }

  if (st.size() > 0) { // 空でなければ、重複あり
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  rep(i,n) cout << a[i] << ' ';
  cout << endl;
  return 0;
}