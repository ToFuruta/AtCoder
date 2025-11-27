#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  bool flg = true;

  cin >> N;
  
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  
  vector<int> count(N + 1, 0);
  for (int i = 0; i < N; i++){
    if (A[i] != -1) count[A[i]]++;
    if (count[A[i]] >= 2) flg = false;
  }

  for (int i = 0; i < N; i++){
    if(A[i] == -1){
      for (int j = 1; j <= N; j++){
        if (count[j] == 0){
          A[i] = j;
          count[j]++;
          break;
        }
      }
    }
  }

  if (flg){
    cout << "Yes" << endl;
    for (int i = 0; i < N; i++){
      cout << A[i] << " ";
    }
  } else {
    cout << "No";
  }
} 