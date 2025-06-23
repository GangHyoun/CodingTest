#include<iostream>
#include<vector>
#include<string>
using namespace std;

void q1() {
	int N;	// 명령의 개수
	cin >> N;
	//vector<int> stack(N); -> N 개의 크기로 초기화 되어 모두 0으로 채워짐
	vector<int> stack;

	int num;
	while (N--) {
		cin >> num;
		int value;

		switch (num) {
		case 1: {	//  정수 X를 스택에 넣는다
			cin >> value;
			stack.push_back(value);
			break;
		}
		case 2: {	// 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력
			if (stack.empty())
				cout << -1 << "\n";
			else {
				cout << stack.back() << "\n";
				stack.pop_back();
			}
			break;
		}
		case 3: {	// 스택에 들어있는 정수의 개수를 출력
			cout << stack.size() << "\n";
			break;
		}
		case 4: {	// 스택이 비어있으면 1, 아니면 0을 출력
			if (stack.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
			break;
		}
		case 5: {	//  스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력
			if (stack.empty())
				cout << -1 << "\n";
			else
				cout << stack.back() << "\n";

			break;
		}
		}
	}
}

void q2() {
	int k;
	cin >> k;
	vector<int> count(k);

	int num;

	while (k--) {
		cin >> num;
		if (num == 0) {
			count.pop_back();
		}
		else {
			count.push_back(num);
		}
	}

	long long sum = 0;
	for (int i = 0; i < count.size(); i++) {
		sum += count[i];
	}

	cout << sum;
}

void q3() {
	int T;
	cin >> T;

	while (T--) {
		string str;
		cin >> str;

		vector<char> stack;
		bool isValid = true;	// VPS 여부

		for (char ch : str) {
			if (ch == '(') {
				stack.push_back(ch);	// 여는 괄호는 push
			}
			else {	// 닫는 괄호 ')'
				if (stack.empty()) {
					isValid = false;	// 짝이 맞지 않음
					break;
				}
				else {
					stack.pop_back();	// 짝 맞는 여는 괄호 제거
				}
			}
		}

		// 여는 괄호가 남아있다면 올바르지 않은 VPS
		if (!stack.empty()) isValid = false;

		cout << (isValid ? "YES" : "NO") << "\n";
	}
}

void q4() {
	string line;
	while (true) {
		getline(cin, line);

		if (line == ".") break;  // 입력 종료 조건

		vector<char> stack;
		bool isBalanced = true;

		for (char ch : line) {
			// 여는 괄호일 경우 스택에 추가
			if (ch == '(' || ch == '[') {
				stack.push_back(ch);
			}
			// 닫는 괄호일 경우 스택에서 확인
			else if (ch == ')') {
				if (stack.empty() || stack.back() != '(') {
					isBalanced = false;
					break;
				}
				stack.pop_back();
			}
			else if (ch == ']') {
				if (stack.empty() || stack.back() != '[') {
					isBalanced = false;
					break;
				}
				stack.pop_back();
			}
		}

		// 끝나고도 스택에 뭔가 남아 있으면 불균형
		if (!stack.empty()) isBalanced = false;

		cout << (isBalanced ? "yes" : "no") << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	return 0;
}
