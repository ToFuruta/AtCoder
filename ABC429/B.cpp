#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int sum = 0;
  bool flg = false;

  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
    sum += A[i];
  }
  
  for (int i = 0; i < N; i++){
    sum -= A[i];
    if(sum == M) {
      flg = true;
    }
    sum += A[i];
  }
  if (flg){
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}