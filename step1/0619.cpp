#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// 시간 복잡도
void time_q1() {
	// MenOfPassion 알고리즘
	// 배열과 n이 주어질 때 이를 통해 i를 구한 후 배열 A의 i번째 원소를 반환
	// n의 범위를 참고 하더라도 어떤 n이더라도 1회 수행되므로 수행시간은 상수 시간이다
	// O{1) 항상 1과 0을 반환
	int n;
	cin >> n;
	cout << 1 << "\n" << 0;
}

void time_q7() {
	// 함수 f(n) = a1n + a0, 양의 정수 c, n0가 주어질 경우 O(n) 정의를 만족하는지
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	// f(n) <= c * g(n)
	// f(n) = a1 * n + a0
	// g(n) = c * n
	// n은 무조건 n0 보다 큰 값

	// a1* n0 + a0 <= c * n0 -> a0나 a1이 음의 정수를 가질 경우 답에 오류가 생김
	// 그러나 a1이 음의 정수를 가질 경우 O(n)의 정의 만족 여부에는 영향을 주지 않음
	// 따라서 a0가 음의 정수일 경우에만 예외처리 필요

	// 부등식 양변의 n의 차수가 음의 정수일 때 a1 <= c가 성립해야 함
	// a0가 양수일 때도 a1의 값이 c의 값보다 크다면 그 결과는 무조건 0이 됨

	if (a1 * n0 + a0 <= c * n0 && a1 <= c)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

// 브루트 포스 : 조합 가능한 모든 문자열을 하나씩 대입해 보는 방식 -> 계산 노가다의 학술적 개념
void brute_q1() {
	// 블랙잭
	// 카드 3장을 모든 조합으로 골라 합이 M을 넘지 않는 최대값 찾기
	int N, M;
	cin >> N >> M;
	vector<int> card(N);
	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}

	int result = 0;

	// i, j, k를 이용해 카드 3장 선택하는 모든 조합 확인
	for (int i = 0; i < N - 2; i++) { // i는 첫 번째 카드의 인덱스 (0부터 N-3까지)
		for (int j = i + 1; j < N - 1; j++) { // j는 두 번째 카드의 인덱스 (i+1부터 N-2까지)
			for (int k = j + 1; k < N; k++) { // k는 세 번째 카드의 인덱스 (j+1부터 N-1까지)
				int sum = card[i] + card[j] + card[k];
				if (sum <= M && sum > result) { // sum <= M 조건을 만족하면서 M에 가장 가까운 값을 result에 저장.
					result = sum;
				}
			}
		}
	}

	cout << result << '\n';

}

void brute_q6() {
	int N;
	cin >> N;

	int result = -1;	// 기본값을 -1로 설정. 정확히 Nkg을 만들 수 없을 때를 대비

	// 5kg 봉지를 최대한 많이 사용하는 경우부터 시작
	for (int five = N / 5; five >= 0; five--) {
		int rest = N - (5 * five);	// 남은 몸무게

		// 나머지를 3kg 봉지로 나눌 수 있다면
		if (rest % 3 == 0) {
			int three = rest / 3;
			result = five + three;
			break;  
		}
	}

	cout << result;
}

// 정렬
void sorting_q1() {
	int N;
	cin >> N;
	set<int> arr;

	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.insert(a);
	}

	for (int i : arr) {
		cout << i << "\n";
	}
}

void sorting_q4() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	/*set<int> arr;

	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.insert(a);
	}

	for (int i : arr) {
		cout << i << "\n";
	}*/

	vector<int> vec(N);

	// auto& p : C++11 이상에서 사용 가능한 range-based for문 문법
	// p : vec 안의 각 원소를 하나씩 꺼내서 반복문을 도는 변수
	// auto : p의 자료형을 자동으로 추론
	// & : 참조(reference)를 의미 → 원본을 직접 수정하거나 불필요한 복사를 피하고자 할 때 사용
	for (auto& p : vec) cin >> p; // 벡터 요소 하나씩 입력 받음
	sort(vec.begin(), vec.end());	// 벡터 정렬 (오름차순)
	for (auto& p : vec) cout << p << "\n"; // 정렬된 벡터 출력
}

int main() {
	sorting_q4();
	return 0;
}
