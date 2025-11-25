#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	auto f = [&](int x) -> int { // ラムダ式 無名関数
		int res = 0;
		while (x) {
			res += x % 10;
			x /= 10;
		}
		return res;
	};

	vector<int> a(n + 1);
	a[0] = 1;
	for (int i = 1; i <= n; i++) {  // 各 A の値を入れていく
		for (int j = 0; j < i; j++) { // それまでの和を計算するため
      a[i] += f(a[j]);
    }
	}
	cout << a[n] << '\n';
}
