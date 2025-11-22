#include <iostream>
#include <vector>
using namespace std;

int main() {
  int X, N, Q;
  int sum;
  cin >> X >> N;

  sum = X;

  vector<int> W(N);
  for(int i = 0; i < N; i++){
    cin >> W[i];
  }

  cin >> Q;
  vector<int> P(Q);
  for (int i = 0; i < Q; i++){
    cin >> P[i];
  }

  vector<bool> B(N);

  for (int i = 0; i < Q; i++){
    if (B[P[i] - 1] == false){
      sum = sum + W[P[i] - 1];
      cout << sum << endl;
      B[P[i] - 1] = true;
    }
    else {
      sum = sum - W[P[i] - 1];
      cout << sum << endl;
      B[P[i] - 1] = false;
    }
  }
}