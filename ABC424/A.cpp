#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  bool flg = false;
  if (a == b || a == c || b == c) {
    flg = true;
  }
  if (flg){
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}