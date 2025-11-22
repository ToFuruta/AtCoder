#include <iostream>
using namespace std;

int main() {
  int A, B, C, D;
  bool flg = false;
  cin >> A >> B >> C >> D;

  if(C >= A) {
    if(D >= B){
      flg = true;
    }
  }
  else {
    flg = true;
  }

  if(flg){
    cout << "No";
  }
  else{
    cout << "Yes";
  }
}