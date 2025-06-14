#include<iostream>
#include<vector>
using namespace std;

int main() {
	// 단계 1 : 구구단
	//int N;
	//cin >> N;
	//for (int i = 1; i < 10; i++) 
	//	cout << N << " * " << i << " = " << N * i << endl;
	

	// 단계 2 : A+B - 3
	/*int T;
	cin >> T;

	int A[100];
	int B[100];

	for (int i = 0; i < T; i++) {
		cin >> A[i] >> B[i];
	}

	for (int i = 0; i < T; i++) {
		cout << A[i] + B[i] << endl;
	}*/

	// 단계 3 : 합
	/*int n,sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;*/

	// 단계 4 : 영수증
	// 총 금액 X, 구매한 물건의 종류 N, 물건의 가격 a, 개수 b

	// vector version
	//int X, N;
	//cin >> X >> N;
	//vector<int> a(N);
	//vector<int> b(N);
	//int sum = 0;

	//for (int i = 0; i < N; i++)
	//	cin >> a[i] >> b[i];

	//for (int i = 0; i < N; i++) {
	//	sum += a[i] * b[i];
	//}

	//cout << (X == sum ? "Yes" : "No");

	// 배열 version
	//int X, N;
	//cin >> X >> N;
	//const int Max = 100;
	//int a[Max];
	//int b[Max];
	//int sum = 0;

	//for (int i = 1; i <= N; i++)
	//	cin >> a[i] >> b[i];
	//
	//for (int i = 1; i <= N; i++) {
	//	sum += a[i] * b[i];
	//}

	//cout << (X == sum ? "Yes" : "No");


	// 단계 5 : 코딩은 체육과목 입니다
	/*int N;
	cin >> N;
	for (int i = 0; i < N / 4; i++)
		cout << "long" << " ";
	cout << "int";*/


	// 단계 6 : 빠른 A + B
	//int T;
	//cin >> T;

	//const int Max = 1000000;
	//int A[Max];
	//int B[Max];
	//
	//for (int i = 0; i < T; i++)
	//	cin >> A[i] >> B[i];

	//for (int i = 0; i < T; i++)
	//	cout << A[i] + B[i] << "\n";

	// 입출력 분리
	//ios::sync_with_stdio(false);	// C와 C++ 입출력 분리
	//cin.tie(NULL);					// cin과 cout의 묶음 해제

	//int T;
	//cin >> T;

	//vector<int> A(T);
	//vector<int> B(T);

	//for (int i = 0; i < T; i++)
	//	cin >> A[i] >> B[i];

	//for (int i = 0; i < T; i++)
	//	cout << A[i] + B[i] << "\n";


	// 단계 7 :A+B -7
	//int T;
	//cin >> T;

	//vector<int> A(T);
	//vector<int> B(T);

	//for (int i = 0; i < T; i++)
	//	cin >> A[i] >> B[i];

	//for (int i = 0; i < T; i++)
	//	cout << "Case #" << i + 1 << ": " << A[i] + B[i] << "\n";


	// 단계 8 :A+B - 8
	//int T;
	//cin >> T;

	//vector<int> A(T);
	//vector<int> B(T);

	//for (int i = 0; i < T; i++)
	//	cin >> A[i] >> B[i];

	//for (int i = 0; i < T; i++)
	//	cout << "Case #" << i + 1 << ": " << A[i] << " + " << B[i] << " = " << A[i] + B[i] << "\n";


	// 단계 9 : 별 찍기 - 1
	/*int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}*/
		

	// 단계 10 : 별 찍기 - 2
	/*int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j > i; j--) {
			cout << " ";
		}

		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << "\n";
	}*/

	// 단계 11 : A+B - 5
	//int T = 1000;

	//vector<int> A(T);
	//vector<int> B(T);

	//int sum = 0;

	//while (1) {
	//	cin >> A[sum] >> B[sum];

	//	if (A[sum] == 0 && B[sum] == 0)
	//		break;

	//	sum += 1;
	//}

	//for (int i = 0; i < sum; i++)
	//	cout << A[i] + B[i] << "\n";



	// 단계 12 : A+B - 4
	int a, b;

	while (cin >> a >> b) {
		cout << a + b << "\n";
	}

	return 0;
}
