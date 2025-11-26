#include <iostream>
#include <string>
using namespace std;

int main(){
  int N, L, R;
  string S;
  bool flg = true;

  cin >> N >> L >> R >> S;

  for (int i = L - 1; i < R; i++){
    if (S[i] != 'o')  flg = false;
  }
  
  if (flg) cout << "Yes";
  else cout << "No";
}