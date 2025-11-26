#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  bool flg = false;

  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  cin >> X;

  for (int i = 0; i < N; i++){
    if (X == A[i]){
      flg = true;
    }
  }
  if (flg) cout << "Yes";
  else cout << "No";
}