#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	return 0;
}

// 핸드폰 요금 [1267]
void q1() {
	int n;
	cin >> n;

	int mSum = 0, ySum = 0;

	while (n--) {
		int num;
		cin >> num;

		ySum += ((num / 30) + 1) * 10;
		mSum += ((num / 60) + 1) * 15;
	}

	if (ySum == mSum) {
		cout << "Y M " << ySum;
	}
	else if (ySum < mSum) {
		cout << "Y " << ySum;
	}
	else {
		cout << "M " << mSum;
	}

}

// 집 주소 [1284]
void q2() {
	while (true) {
		string n;
		cin >> n;

		if (n == "0")
			break;

		int sum = 2 + (n.length() - 1); // 기본 양 끝 공백 + 숫자 간 공백

		for (int i = 0; i < n.length(); i++) {
			if (n[i] - '0' == 0) sum += 4;
			else if (n[i] - '0' > 1) sum += 3;
			else sum += 2;
		}

		cout << sum << "\n";
	}
}
