#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int count = 0;
		string text, result;
		cin >> count >> text;
		for (int j = 0; j < text.length(); j++) {
			char c = text[j];
			for (int k = 0; k < count; k++) {
				result += c;
			}
		}
		cout << result << "\n";
	}
}

void n1() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "\n";
	}
}

void ascii() {
	char c;
	cin >> c;
	int result = 0;
	result = c - '0' + 48;
	cout << result;
}
