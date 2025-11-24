#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <tuple>
using namespace std;

int main() {
  string S;
  cin >> S;

  int pos = S.find('-');

  int a = stoi(S.substr(0, pos));
  int b = stoi(S.substr(pos + 1));

  if (b < 8){
    b ++;
  }
  else {
    b = 1;
    a++;
  }

  cout << a << "-" << b;
}