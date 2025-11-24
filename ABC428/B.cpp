#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, K;
  string S;

  cin >> N >> K;
  cin >> S;

  vector<string> T(N - K + 1);
  vector<int> count(N - K + 1, 1);
  int max_count;
  
  for (int i = 0; i < N - K + 1; i++){
    string t = S.substr(i, K);
    T[i] = t;
  }

  sort(T.begin(), T.end());

  for (int i = 0; i < (int)T.size() - 1; i++){
    for (int j = i + 1; j < (int)T.size(); j++){
      if (T[i] == T[j]){
        count[i]++;
      }
    }
  }
  max_count = *max_element(count.begin(), count.end());
  cout << max_count << endl;

  for (int i = 0; i < (int)count.size(); i++){
    if (count[i] == max_count){
      cout << T[i] << " ";
    }
  }
}