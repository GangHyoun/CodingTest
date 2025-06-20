#include<iostream>
using namespace std;

int main() {
	// 단계 1 : 
	// 문제 : 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
	// 입력 : 첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다.
	/*int A, B = 0;
	cin >> A >> B;
	cout << (A > B ? ">" : (A < B ? "<" : "==")) << endl;
	return 0;*/


	// 단계 2 : 
	// 문제 : 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
	// 입력 : 첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
	/*int score = 0;
	cin >> score;
	cout << (score >= 90 ? "A" : (score >= 80 ? "B" : (score >= 70 ? "C" : score >= 60 ? "D" : "F")));*/

	// 단계 3 : 
	// 문제 : 
	// 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
	/*윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
	예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다.하지만, 2000년은 400의 배수이기 때문에 윤년이다.*/
	// 입력 : 첫째 줄에 연도가 주어진다. 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다.
	/*int year = 0;
	cin >> year;
	cout << (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 1 : 0);*/


	// 단계 4: 사분면
	/*int x, y = 0;
	cin >> x >> y;
	cout << (x > 0 && y > 0 ? 1 : (x < 0 && y > 0 ? 2 : (x < 0 && y < 0 ? 3 : 4))) << endl;*/


	// 단계 5: 알람 시계
	//int H, M = 0;
	//cin >> H >> M;
	//if (M - 45 >= 0) {
	//	cout << H << " " << M - 45 << endl;
	//}
	//else if (M - 45 < 0) {
	//	if (H - 1 >= 0) {
	//		cout << H - 1 << " " << 60 + (M - 45) << endl;
	//	}
	//	else if (H - 1 < 0) {
	//		cout << 23 << " " << 60 + (M - 45) << endl;
	//	}	
	//}



	// 단계 6 :오븐 시계
	//int H, M, cook_time;
	//cin >> H >> M >> cook_time;

	//// 1. 분 단위로 cook_time을 더함
	//M += cook_time;

	//// 2. M이 60 이상이면 시로 변환
	//if (M >= 60) {
	//	H += M / 60;  // 60분마다 1시간 증가
	//	M = M % 60;   // 남은 분 계산
	//}

	//// 3. H가 24 이상이면 0~23 사이로 조정
	//if (H >= 24) {
	//	H = H % 24;
	//}

	//cout << H << " " << M << endl;


	// 단계 7 : 주사위 세 개
	int A, B, C;
	cin >> A >> B >> C;
	
	
	if (A == B || A == C || B == C)
		// 1. 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
		if (A == B && A == C)
			cout << 10000 + A * 1000;
		// 2. 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
		else if (A == B || A == C)
			cout << 1000 + A * 100;
		else
			cout << 1000 + B * 100;
	
	// 3. 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
	else
		if (A > B && A > C)
			cout << A * 100;
		else if (B > A && B > C)
			cout << B * 100;
		else
			cout << C * 100;

	return 0;
}
