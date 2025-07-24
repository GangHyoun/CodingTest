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

// 체스판 다시 칠하기 [1018]
void q1() {
	int n, m;
	cin >> n >> m;

	vector<string> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int repaint = 64; // 최대로 바꿔야 하는 칸 수(8 * 8 전체)

	// 시작 위치 탐색
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			// 왼쪽 위 칸이 W, B인지
			int repaintW = 0;
			int repaintB = 0;

			// 8 * 8 영역 내부 순회
			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					char current = v[i + x][j + y];

					// (x + y) 짝수일 경우 시작하는 색, 홀수일 경우 반대 색
					if ((x + y) % 2 == 0) {
						// W, B 각각 시작하는 색 기준
						if (current != 'W') repaintW++;
						if (current != 'B') repaintB++;
					}
					else {
						if (current != 'B') repaintW++;
						if (current != 'W') repaintB++;
					}
				}
			}

			// 둘 중 더 적은 repaint 값을 최소값과 비교 후 갱신
			repaint = min(repaint, min(repaintW, repaintB));
		}
	}

	cout << repaint << "\n";

}

// 수 찾기 [1920]
void q2() {
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	// 정렬
	sort(v.begin(), v.end());

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;

		// 이진 탐색
		if (binary_search(v.begin(), v.end(), x))
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
}
