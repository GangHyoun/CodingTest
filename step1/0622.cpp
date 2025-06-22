#include<iostream>
#include<set>
#include<string>
#include<map>
using namespace std;

void map1_q1() {
	// 1번 : 숫자 카드
	long long N, M;
	cin >> N;
	set<long long> getCard;


	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		getCard.insert(num);
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> num;
		cout << (getCard.count(num) ? 1 : 0) << " ";
	}
}

void map1_q2() {
	// 나는야 포켓몬 마스터 이다솜
	int N, M;
	cin >> N >> M;

	map<string, int> nameToNum;
	map<int, string> numToName;

	string name;
	for (int i = 1; i <= N; i++) {
		cin >> name;
		// nameToNum.insert({ name, i });
		nameToNum[name] = i;
		numToName[i] = name;
	}

	string quiz;
	int num = 0;
	for (int i = 0; i < M; i++) {
		cin >> quiz;
		if (quiz[0] >= '0' && quiz[0] <= '9') {
			num = stoi(quiz);
			// 여기서 시간 초과 발생
			// value → key 검색은 순회밖에 방법이 없기 때문에 O(N) 시간이 걸림.
			// 이게 M번 반복되면 O(N × M) = 최대 10억 → 시간초과 발생
			/*for (auto& pair : nameToNum) {
				if (pair.second == num) {
					cout << pair.first << "\n";
				}
			}*/
			// 숫자 → 이름
			// M개의 문제 처리: O(M log N)
			cout << numToName[stoi(quiz)] << "\n";
		}
		//  key로 검색은 O(log N)으로 빠름
		else { // (nameToNum.find(quiz) != nameToNum.end()) 
			// 이름 → 숫자
			cout << nameToNum[quiz] << "\n";
		}
	}

	// 전체: O((N + M) log N) → 빠름
}

// 최대공약수
int gcd(int a, int b) {
	// (a > b) a % b => 나머지가 0이 될 때까지 a = b, b = r 값을 넣어서 나머지를 구함
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// 최소공배수
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

void num2_q1() {
	// 최소공배수 = 두 자연수의 곱 / 최대공약수
	// 최대공약수 구하는 알고리즘 : 유클리드 

	int T, A, B, max = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;

		cout << lcm(A, B) << "\n";
	}
}

// 소수 판별 함수
bool isPrime(long long num) {
	if (num < 2) return false;
	if (num == 2) return true;
	if (num % 2 == 0) return false;

	// i * i <= num : √num까지만 검사 -> 약수는 √n 이하 중 하나가 반드시 존재
	/*
		num = 29
		√29 ? 5.38
		검사할 수는 3, 5까지
		3*3 = 9 ≤ 29 → 검사
		5*5 = 25 ≤ 29 → 검사
		7*7 = 49 > 29 → 루프 종료
	*/
	for (long long i = 3; i * i <= num; i += 2) {
		if (num % i == 0) return false;
	}
	return true;
}

void num2_q5() {

	int T;
	cin >> T;

	long long n;
	while (T--) {
		cin >> n;

		while (!isPrime(n)) {
			n++;
		}
		cout << n << "\n";
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	return 0;
}
