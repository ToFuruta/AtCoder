#include <iostream>
using namespace std;

int main() {
  int S, A, B, X;
  cin >> S >> A >> B >> X;
  int sum = 0;
  bool flg = true;
  while(flg){
    if (A <= X) {
      sum += S * A;
    }
    else {
      sum += S * X;
    }
    X -= A;
    X -= B;
    if (X <= 0){
      X = 0;
      flg = false;
    }
  }
  cout << sum;
}

// int main() {
//   int S, A, B, X;
//   cin >> S >> A >> B >> X;
//   int sum = 0;
//   int time, time2;
//   time = A + B;
//   time2 = X / time;
//   X = X - (B * time2);
//   sum = S * X;
//   cout << sum;
// }