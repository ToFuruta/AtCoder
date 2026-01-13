#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string T, U;
    cin >> T >> U;
    vector<int> indices;
    for (int i = 0; i < T.size(); i++) {
        if (T[i] == '?') {
            indices.push_back(i);
        }
    }
    vector<char> alphabets(26);
    for (int i = 0; i < 26; i++) {
        alphabets[i] = 'a' + i;
    }
    for (char a : alphabets) {
        for (char b : alphabets) {
            for (char c : alphabets) {
                for (char d : alphabets) {
                    string S = T;
                    S[indices[0]] = a;
                    S[indices[1]] = b;
                    S[indices[2]] = c;
                    S[indices[3]] = d;
                    if (S.find(U) != string::npos) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}