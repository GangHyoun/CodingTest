#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string S;
	cin >> S;
	vector<int> positions(26, -1);
	for (int i = 0; i < S.length(); i++) {
		char c = S[i]; 
		int index = c - 'a';
		if (positions[index] == -1) {
			positions[index] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << positions[i] << " ";
	}
	cout << "\n";
}

void verificationNum() {
	int a = 0, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		sum += a * a;
	}
	sum = sum % 10;
	cout << sum << "\n";
}

void sum1() {
	int N = 0, sum = 0;
	string num;
	cin >> N;
	cin >> num;
	for (char c : num) {
		int digit = c - '0';
		sum += digit;
	}
	cout << sum << "\n";
}
