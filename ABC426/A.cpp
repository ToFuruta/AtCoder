#include <iostream>
#include <string>
using namespace std;

int main() {
  string X, Y;
  cin >> X >> Y;
  bool flg = true;
  if (X != "Lynx" && Y == "Lynx"){
    flg = false;
  }
  else if (X == "Ocelot" && Y == "Serval"){
    flg = false;
  }

  if (flg){
    cout << "Yes";
  }
  else {
    cout << "No";
  }
}