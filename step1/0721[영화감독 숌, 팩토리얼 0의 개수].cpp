#include<iostream>
#include<string>
using namespace std;

int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	
	return 0;
}


// 영화감독 숌[1436]
void q1() {
	int n;
	cin >> n;

	int count = 0;
	int num = 666;

	while (true) {
		string s = to_string(num);
		if (s.find("666") != string::npos) { // string::npos -> 값을 찾지 못 했다는 것을 의미
			count++;
			if (count == n) {
				cout << num << endl;
				break;
			}
		}
		num++;
	}
}

// 팩토링얼 0의 개수 [1676]
void q2() {
	int n;
	cin >> n;

	//int sum = factorial(n);
	//string s = to_string(sum);
	int count = 0;
	for (int i = 5; i <= n; i *= 5) {
		count += n / i;	// 5, 25, 125, 625 .... 에서 몇 개 나눠지는지 확인
	}

	/*for (char ch : s) {
		if (ch == '0') count++;
	}*/

	cout << count << "\n";
}
