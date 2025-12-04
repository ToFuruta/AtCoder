#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = (int)S.size();

    long double ans = 0.0L;

    // S の全部分文字列 S[i..j] を見る
    for (int i = 0; i < N; i++) {
        for (int j = i + 2; j < N; j++) { // 長さ >= 3
            // 条件：先頭と末尾が 't'
            if (S[i] != 't' || S[j] != 't') continue;

            int x = 0; // この部分文字列中の 't' の個数
            for (int k = i; k <= j; k++) {
                if (S[k] == 't') x++;
            }

            int len = j - i + 1; // 部分文字列の長さ |t|
            // 充填率 = (x - 2) / (|t| - 2)
            long double rate = (long double)(x - 2) / (long double)(len - 2);

            if (rate > ans) ans = rate;
        }
    }

    // 誤差 1e-9 以内ならOKなので、十分多めに桁を出しておく
    cout << fixed << setprecision(15) << ans << '\n';

    return 0;
}
