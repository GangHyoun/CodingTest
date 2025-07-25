#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	

	return 0;
}

// 숫자카드 2 [10816]
void q1() {
	int n;
	cin >> n;

	vector<int> cards(n);
	for (int i = 0; i < n; i++) {
		cin >> cards[i];
	}

	sort(cards.begin(), cards.end());

	int m;
	cin >> m;

	while (m--) {
		int target;
		cin >> target;

		/* 반복자
			vector, map ... C++ STL 컨테이너는 반복자를 사용

			반복자란?
			컨테이너의 원소를 가리키는 포인터처럼 생긴 객체
			-> 컨테이너의 특정 원소를 가리키는 <주소 역할>

			반복자 - 반복자 = 두 위치의 거리(인덱스 차) -> 아래의 의미는 시작 위치부터 얼마나 떨어져 있나 = 인덱스 번호
		*/

		int lower = lower_bound(cards.begin(), cards.end(), target) - cards.begin(); // "값 이상"이 처음 나오는 위치(인덱스 값)
		int upper = upper_bound(cards.begin(), cards.end(), target) - cards.begin();// "값 초과"가 처음 나오는 위치(인덱스 값) 

		cout << upper - lower << " ";
	}
}

// 스택 [10828]
void q2() {
	int n;
	cin >> n;

	vector<int> stack;
	while (n--) {
		string s;
		cin >> s;

		if (s == "push") {
			int x;
			cin >> x;
			stack.push_back(x);
		}
		else if (s == "pop") {
			if (!stack.empty()) {
				cout << stack.back() << "\n";
				stack.pop_back();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (s == "size") {
			cout << stack.size() << "\n";
		}
		else if (s == "empty") {
			cout << (stack.empty() ? 1 : 0) << "\n";
		}
		else if (s == "top") {
			if (!stack.empty()) {
				cout << stack.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
}
