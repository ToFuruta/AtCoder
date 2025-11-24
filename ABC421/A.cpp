#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  string Y;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++){
    cin >> S[i];
  }
  cin >> X >> Y;
  if (S[X - 1] == Y){
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}