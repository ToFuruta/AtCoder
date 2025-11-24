#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  for (int i = 0; i < N; i++){
    cin >> S[i]; //行ごとに追加
  }

  set<vector<string>> grid_set; //重複するグリッドは無視。
  for (int i = 0; i < N - M + 1; i++){ // i は行
    for (int j = 0; j < N - M + 1; j++){ // j は列
      vector<string> grid; // 一つずつにグリッドを保存する場所
      for(int ii = i; ii < i + M; ii++){
        grid.push_back(S[ii].substr(j,M));
      }
      grid_set.insert(grid);
    }
  }
  cout << grid_set.size() << endl;
}