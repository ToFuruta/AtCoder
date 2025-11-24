#include <iostream>
using namespace std;

int main() {
  int a, b;
  char hyphen;

  cin >> a >> hyphen >> b;

  if (b < 8){
    b ++;
  }
  else {
    b = 1;
    a++;
  }

  cout << a << "-" << b;
}