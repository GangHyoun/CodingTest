#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}


// q1 
int n, m;
vector<int> selected;	// 현재 선택된 수열
vector<bool> visited(9);	// 숫자 사용 여부 확인(조건상 1~8까지)

// depth : 현재까지 고른 숫자 개수
void dfs(int depth) {
	if (depth == m) {
		for (int num : selected) {
			cout << num << " ";
		}
		cout << "\n";
		return;
	}


	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			selected.push_back(i);
			dfs(depth + 1);
			selected.pop_back();	// 선택된 수열 원상 복구
			visited[i] = false;		// 사용 여부 원상 복구
		}
	}
}

void q1() {
	cin >> n >> m;
	dfs(0);

}

// q7

int N;
vector<int> A;  // 숫자 저장 배열
int max_result = -1e9;  // 최댓값 초기화 (충분히 작은 수)
int min_result = 1e9;   // 최솟값 초기화 (충분히 큰 수)

// idx: 현재 탐색 중인 수열 인덱스
// current_result: 지금까지 계산된 값
void dfs(int idx, int current_result, int plus, int minus, int mul, int div) {
    // 모든 숫자를 다 사용했으면 최댓값, 최솟값 갱신
    if (idx == N) {
        max_result = max(max_result, current_result);
        min_result = min(min_result, current_result);
        return;
    }

    // 덧셈 연산자가 남아 있으면 사용
    if (plus > 0) {
        dfs(idx + 1, current_result + A[idx], plus - 1, minus, mul, div);
    }

    // 뺄셈 연산자
    if (minus > 0) {
        dfs(idx + 1, current_result - A[idx], plus, minus - 1, mul, div);
    }

    // 곱셈 연산자
    if (mul > 0) {
        dfs(idx + 1, current_result * A[idx], plus, minus, mul - 1, div);
    }

    // 나눗셈 연산자 (음수 나눗셈 처리)
    if (div > 0) {
        int next_result;
        if (current_result < 0) {
            next_result = -(-current_result / A[idx]);  // 음수 나눗셈 처리
        }
        else {
            next_result = current_result / A[idx];
        }
        dfs(idx + 1, next_result, plus, minus, mul, div - 1);
    }
}


void q7() {
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int plus, minus, mul, div;
    cin >> plus >> minus >> mul >> div;

    // DFS 시작: 첫 번째 숫자에서 시작
    dfs(1, A[0], plus, minus, mul, div);

    // 결과 출력
    cout << max_result << '\n';
    cout << min_result << '\n';
}
