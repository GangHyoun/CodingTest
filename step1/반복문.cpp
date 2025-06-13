#include<iostream>
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
	int n,sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;
	return 0;
}
