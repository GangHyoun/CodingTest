#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// 수학 1
void math1_q1() {
	// 1번 : 진법 변환
	// string -> stoi() : int형으로 변환 | stoll() : long long 형으로 변환
	// 진법의 수를 10진수로 변환
	// A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
	string N;
	int B, num = 0;
	cin >> N >> B;

	long long result = 0;	// int -> long long 변경 (10억이 넘는 곱셈이 일어날 경우)
	for (int i = 0; i < N.size(); i++) {
		if ('0' <= N[i] && N[i] <= '9')
			result = result * B + (N[i] - '0');
		else
			result = result * B + (N[i] - 'A' + 10);
	}

	cout << result;
}

void math2_q5() {
	// 5번 : 벌집
	// 규칙 = 1층을 제외한 층별로 6의 배수로 방이 증가
	int N;
	cin >> N;

	int count = 1, layer = 1;	// count : 방의 개수, layer : 층

	while (N > count) {
		count += 6 * layer;
		layer++;
	}

	cout << layer;
}

// 약수, 배수와 소수
void num_q1() {
	int A =0, B = 0;
	while (1) {
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		if (A / B == 0)
			cout << "factor" << "\n";
		else if (A % B == 0)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";
	}
}

void num_q5() {
	int M, N;
	cin >> M >> N;

	vector<int> check; // push_back()을 이용해 크기 지정 x
	int sum = 0;

	for (int i = M; i <= N; i++) {
		if (i < 2) continue;  // 0과 1은 소수가 아님
		bool isPrime = true;

		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			check.push_back(i);  // 소수 저장
			sum += i;            // 합 누적
		}
	}

	if (check.empty())
		cout << -1;
	else
		cout << sum << "\n" << check[0];

}

// 기하1
void geometry1_q1() {
	int A, B;
	cin >> A >> B;

	cout << A * B;
}

void geometry1_q7() {
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		// 세 변 중 가장 긴 변이 나머지 두 변의 합보다 크거나 같으면 Invalid
		int maxLength = max({ a, b, c });
		int sum = a + b + c;

		if (maxLength >= sum - maxLength) {	// 조건에 부합하지 않는 경우
			cout << "Invalid\n";
		}
		else if (a == b && b == c) {		// 세 변의 길이가 모두 같은 경우
			cout << "Equilateral\n";
		}
		else if (a == b || b == c || c == a) {	// 두 변의 길이만 같은 경우
			cout << "Isosceles\n";
		}
		else {
			cout << "Scalene\n";		// 세 변의 길이가 모두 다른 경우
		}
	}
	
}

int main() {
	//num_q5();
	//geometry1_q1();
	geometry1_q7();
	return 0;
}
