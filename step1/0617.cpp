#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// 문자열
void str_q1() {
	// 1번 : 문자와 문자열
	string S;
	int i = 0;
	cin >> S >> i;

	// string 문자열은 0부터 시작함
	/*cout << S.at(i);*/

	S.insert(0, " ");
	cout << S.at(i);
}

void str_q8() {
	// 8번 : 단어의 개수
	string str;
	getline(cin, str);	// 한 줄 통째로 입력 받기(공백 포함)
	int count = 1;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}

	if (str[str.length() - 1] == ' ')
		count -= 1;
	if (str[0] == ' ')
		count -= 1;

	cout << count;
}

// 심화1
void hard_q1() {
	// 1번 : 새싹
	cout << "         ,r'\"7" << "\n";
	cout << "r`-_   ,'  ,/" << "\n";
	cout << " \\. \". L_r'" << "\n";
	cout << "   `~\\/" << "\n";
	cout << "      |" << "\n";
	cout << "      |" << "\n";
}

void hard_q5() {
	// 5번 : 단어 공부
	// 알파벳 개수 26개
	// ASCII 문자 A(65) ~ Z(90) / a(97) ~ z(122) => a~z [25] 차이, A ~ a [32] 차이
	string str;
	cin >> str;

	// 전체 문자를 소문자로 변환
	/*
	str.begin() ~str.end() : 문자열의 처음부터 끝까지 순회
	str.begin() : 결과를 저장할 위치
	::tolower : 각 문자를 소문자로 바꾸는 함수(전역 함수이므로::를 붙임)
	*/
	transform(str.begin(), str.end(), str.begin(), ::tolower);

	// 알파벳 사용 빈도 확인
	int check[26] = { 0 }; // 알파벳 개수만큼 초기화

	for (int i = 0; i < str.length(); i++) {
		int alpha = str[i] - 'a'; // 인덱스 계산
		check[alpha]++;
	}

	int maxCount = 0;		// 사용 횟수
	int maxIndex = 0;		// 최대 사용 횟수 Index
	bool duplicate = false;	// 중복 여부

	for (int i = 0; i < 26; i++) {
		if (maxCount < check[i]) {
			maxCount = check[i];
			maxIndex = i;
			duplicate = false;
		}
		else if (check[i] == maxCount) {
			duplicate = true;
		}
	}

	if (duplicate)
		cout << "?" << endl;
	else
		cout << (char)(maxIndex + 'A') << endl; // 대문자로 출력
}

// 2차원 배열 단계
void arr2_q1(){
	int N, M;
	cin >> N >> M;

	// A, B, 결과 행렬을 N x M 크기로 선언
	vector<vector<int>> A(N, vector<int>(M));
	vector<vector<int>> B(N, vector<int>(M));
	vector<vector<int>> result(N, vector<int>(M));

	// A 행렬 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}

	// B 행렬 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> B[i][j];
		}
	}

	// A + B 계산
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			result[i][j] = A[i][j] + B[i][j];
		}
	}

	// 결과 출력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}

}

void arr2_q2() {
	// 2번 : 최댓값
	vector<vector<int>> A(9, vector<int>(9));
	int max = 0;
	int maxRow, maxCol = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> A[i][j];

			if (max < A[i][j]) {
				max = A[i][j];
				maxRow = i;
				maxCol = j;
			}
		}
	}

	cout << max << "\n" << maxRow + 1 << " " << maxCol + 1;
}

int main() {
	

	return 0;
}
