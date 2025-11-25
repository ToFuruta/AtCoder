#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A = 1;
  int sum = A, res = 0;
  int B, C, D, E;
  
  for (int i = 0; i < N; i++){
    if (sum >= 10 && sum < 100) {
      B = sum / 10;
      C = sum % 10;
      sum = B + C;
    }
    else if (sum >= 100 && sum < 1000){
      B = sum / 100;
      C = sum % 100;
      D = sum % 10;
      C = C / 10;
      sum = B + C + D;
      // cout << B << C << D << endl;
    }
    else if (sum >= 1000 && sum < 10000){
      B = sum / 1000;
      C = sum % 1000;
      D = sum % 100;
      E = sum % 10;
      C = C / 100;
      D = D / 10;
      sum = B + C + D + E;
    }
    res += sum;
    sum = res;
  }
  cout << res;
}