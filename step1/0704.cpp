#include<iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

void q2() {
	int n;
	cin >> n;

	cout << fibonacci(n);
}

void fillPattern(vector<vector<char>>&board, int x, int y, int size) {
    if (size == 1) {
        board[x][y] = '*';
        return;
    }

    int next = size / 3;    // 현재 블록의 다음에 그릴 패턴의 크기
    // 3x3 격자 기준으로 반복
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // 가운데 블럭은 비워둠
            if (i == 1 && j == 1)
                continue;
            // x = 세로, y는 가로
            fillPattern(board, x + i * next, y + j * next, next);
        }
    }
}

int main() {
    int N;
    cin >> N;

    // N x N 크기의 보드를 공백으로 초기화
    vector<vector<char>> board(N, vector<char>(N, ' '));

    // (0,0)에서 시작해 전체 크기 N에 대해 패턴 채우기
    fillPattern(board, 0, 0, N);

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j];
        }
        cout << "\n";
    }

    return 0;
}
