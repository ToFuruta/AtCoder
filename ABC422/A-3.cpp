#include <iostream>
#include <sstream>
using namespace std;

int main() {
  string S;
  cin >> S;

  stringstream ss(S);
  int a, b;
  char hyphen;

  ss >> a >> hyphen >> b;

  if (b < 8){
    b ++;
  }
  else {
    b = 1;
    a++;
  }

  cout << a << "-" << b;
}