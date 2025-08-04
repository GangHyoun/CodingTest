#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	
	return 0;
}


// 공 [1547]
void q1() {
	int m;
	cin >> m;	// 컵 위치를 바꾼 횟수

	int pos = 1;

	while (m--) {
		int x, y;
		cin >> x >> y;

		if (pos == x) pos = y;
		else if (pos == y) pos = x;
	}

	cout << pos << "\n";
}

// 꼬리를 무는 숫자 나열 [1598]
void q2() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(4, vector<int>(10000000 / 4)); //  4행 고정, 10000000 개의 수를 4개의 행에 나눠야 함

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10000000 / 4; j++) {
			v[i][j] = j * 4 + (i + 1);
		}
	}

	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10000000 / 4; j++) {
			if (v[i][j] == n) x1 = i, y1 = j;
			if (v[i][j] == m) x2 = i, y2 = j;
		}
	}

	int sum = 0;

	if (y1 < y2) {
		sum += y2 - y1;
	}
	else if (y1 > y2) {
		sum += y1 - y2;
	}

	if (x1 < x2) {
		sum += x2 - x1;
	}
	else if (x1 > x2) {
		sum += x1 - x2;
	}

	cout << sum << "\n";

}
