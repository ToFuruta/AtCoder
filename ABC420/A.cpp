#include <iostream>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  int sum;
  sum = X + Y;
  if(sum > 12){
    sum = sum - 12;
  }
  cout << sum;
}