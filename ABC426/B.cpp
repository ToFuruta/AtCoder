#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;

  // char s = S[0];

  vector<char> c(S.size());
  vector<int> count(S.size(), 0);
  
  for(int i = 0; i < S.size(); i++){
    c[i] = S[i];
  }
  
  for(int i = 0; i < S.size(); i++){
    for(int j = 0; j < S.size(); j++){
      if(c[i] == S[j]) count[i]++;
    }
  }

  int mn = *std::min_element(count.begin(), count.end());

  for(int i = 0; i < S.size(); i++){
    if (count[i] == mn) cout << S[i];
  } 
}