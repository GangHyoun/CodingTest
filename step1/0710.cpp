#include<iostream>
#include<string>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
    
	return 0;
}

// 소수찾기[1978]
void prime() {
	int n, num, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (isPrime(num)) count++;
	}

	cout << count;
}

// 분해합[2231]
void sum() {
    int N;
    cin >> N;

    int result = 0;

    // N의 자릿수 최대 합은 9 * 자릿수
    // N이 1000000일 때 최대 자리수합은 9*6=54 → 최소한 N-54부터 검사
    for (int i = max(1, N - 54); i < N; i++) {
        int sum = i;
        int temp = i;

        // 각 자리수의 합 구하기 .....198
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        // 분해합이 N
        if (sum == N) {
            result = i;
            break;
        }
    }

    cout << result << endl;

}

// 팰린드롬 수 [1259]
void palindrom() {
    string s;

    while (true) {
        cin >> s;
        if (s == "0") break;

        bool isPalindrome = true;
        int len = s.length();

        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) cout << "yes\n";
        else cout << "no\n";
    }
}
