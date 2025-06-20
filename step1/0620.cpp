#include<iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;

	//cout << n * (n - 2) * (n - 1) / 6 << "\n" << 3;
	// 곱셈의 순서가 틀려 수행 횟수 계산이 틀릴 수 있음 -> ? -> 상관 없음
	cout << n * (n - 1) * (n - 2) / 6 << "\n" << 3;

	return 0;
}
