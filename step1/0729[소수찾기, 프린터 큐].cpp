#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	
	return 0;
}

// 소수 찾기[1929]
void q1() {
	int n, m;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << "\n";
		}
	}
}

// 프린터 큐 [1966]
void q2() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;	// 문서 개수, 궁금한 문서 위치

		queue<pair<int, int>> q; // 중요도, 위치
		priority_queue<int> pq; // 중요도 내림차순 정렬용

		for (int i = 0; i < n; i++) {
			int priority; // priority : 우선순위
			cin >> priority;
			q.push({ priority, i });
			pq.push(priority);
		}

		int order = 0; // 출력 순서

		while (!q.empty()) {
			int cur_priority = q.front().first;
			int cur_index = q.front().second;
			q.pop();

			// 현재 문서가 가장 높은 우선순위면 인쇄
			if (cur_priority == pq.top()) {
				pq.pop();
				order++;

				if (cur_index == m) {
					cout << order << '\n'; // 궁금한 문서 출력 순서
					break;
				}
			}
			else {
				// 중요도가 높은 문서가 뒤에 있으면 맨 뒤로 보냄
				q.push({ cur_priority, cur_index });
			}

		}
	}

}
