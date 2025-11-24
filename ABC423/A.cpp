#include <iostream>
using namespace std;

int main() {
  int X, C;
  int count = 0;
  cin >> X >> C;
  bool flg = true;
  int sum;
  
  while(flg){
    X = X - (1000 + C);
    if (X >= 0){
      count++;
    }
    if (X <= 0){
      flg = false;
    }
  }
  sum = count * 1000;
  cout << sum;
}
