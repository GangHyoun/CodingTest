#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main() {

	return 0;
}

// 직각삼각형[4153번]
void triangle() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) {
			break;
		}

		int arr[3] = { a, b, c };
		sort(arr, arr + 3); // 오름차순 정렬

		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
			cout << "right" << "\n";
		}
		else {
			cout << "wrong" << "\n";
		}
	}
}

// 웰컴키트[30802번]
void welcomeKit() {
	int n, s, m, l, xl, xxl, xxxl, t, p, tSum = 0;
	cin >> n >> s >> m >> l >> xl >> xxl >> xxxl >> t >> p;

	tSum += ceil((double)s / t);
	tSum += ceil((double)m / t);
	tSum += ceil((double)l / t);
	tSum += ceil((double)xl / t);
	tSum += ceil((double)xxl / t);
	tSum += ceil((double)xxxl / t);

	cout << tSum << "\n" << n / p << " " << n % p;
}
