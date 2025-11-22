#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = ssize(s);
  s.erase(s.begin() + n / 2);
  cout << s;
}