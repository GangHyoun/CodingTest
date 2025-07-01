#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	return 0;
}

void q1() {
	int n;
	cin >> n;

	int result = 0;

	result = n * (n - 1);

	cout << result;
}

void q5() {
	// n개의 원소를 가지고 있는 집합에서 m개의 원소를 선택할 수 있는 경우의 수 => 조합
	// 공식 : n! / ((n-r)! * r!)
	// 공식을 다르게 작성하면 ( m! / (m - n)! ) / n! => m * (m-1) * (m-2)* ... * (m - n + 1) / n!

	int t, n, m; // t : 테스트 케이스, n : west 사이트 개수, m : east 사이트 개수
	cin >> t;

	while (t--) {
		cin >> n >> m;

		long long result = 1;
		int tmp = 1;

		for (int i = m; i > m - n; --i) {	// ( m! / (m - n)! ) / n!
			result *= i;	//  m! / (m - n)! -> 순열
			result /= tmp;	//  n! -> 순열 / 중복 제거

			tmp++;
		}

		cout << result << "\n";
	}
}
