#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  vector<string> v(3);

  for (int i = 0; i < 3; i++){
      v[i] = S[S.size() - (3 - i)];
  }

  if(v[0] == "t" && v[1] == "e" && v[2] == "a") {
    cout << "Yes";
  } else {
    cout << "No";
  }
}