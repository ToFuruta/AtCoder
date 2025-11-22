#include <iostream>
using namespace std;

int main() {
  int H, B;
  cin >> H >> B;

  int hk;
  hk = H - B;
  if (hk < 0){
    hk=0;
  }
  cout << hk;
}