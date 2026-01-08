#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == "sick" && s2 == "sick") cout << '1';
  else if (s1 == "sick") cout << '2';
  else if (s2 == "sick") cout << '3';
  else cout << '4';
  return 0;
}