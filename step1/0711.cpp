#include<iostream>
#include<numeric>
using namespace std;

// 유클리드 호제법 : 어떤 두 수 n과 m의 최대공약수는 n % m과 m의 최대공약수와 같다.

// 최대공약수 (유클리드 호제법 - 재귀)
int gcd1(int n, int m) {
	if (m == 0) return n;
	return gcd1(m, n % m); // m이 0이 될 때까지 n을 m으로 나눈 나머지를 m에 대입
}

// 최대공약수 (유클리드 호제법 - 반복)
int gcd2(int n, int m) {
	while (m != 0) {
		int temp = n % m;
		n = m;
		m = temp;
	}
	return n;
}

// 최소공배수
int lcm1(int n, int m) {
	return (n* m) / gcd(n, m);
}


int main() {
	
}




// 최대공약수와 최소공배수[2609]
void gcdAndLcm() {
	int n, m;
	cin >> n >> m;

	// numeric에 포함된 gcd() 함수 -> c++ 17 버전 이상부터 사용가능
	cout << gcd(n, m) << "\n";

	// 최소공배수
	cout << lcm(n, m);
}



// 부녀회장이 될테야 [2775]
void apart() {
	int T, k, n; // k = 층, n = 호
	cin >> T;

	int apt[15][15] = { 0 };

	// 0층 초기화
	for (int i = 1; i <= 14; i++) {
		apt[0][i] = i;
	}

	// 아파트 인원
	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
		}
	}

	while (T--) {
		cin >> k >> n;

		cout << apt[k][n] << "\n";
	}
}
