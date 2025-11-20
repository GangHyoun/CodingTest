#include<iostream>
#include<string>

using namespace std;

void solve() {
	int H, W, N;
	cin >> H >> W >> N;

	int floor;
	int room_number;

	// 층수 계산: 
	// N번째 손님은 H로 나눈 나머지(1부터 H까지)가 층수
	floor = (N - 1) % H + 1;

	// 호실 번호 계산:
	// N번째 손님은 H로 나눈 몫이 몇 번째 열인지 결정
	room_number = (N - 1) / H + 1;

	// 방 번호 출력
	// 호실 번호는 room_number는 최대 99이므로 두 자리
	printf("%d%02d\n", floor, room_number);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		solve();
	}

}

// 문자열 변환 문제
void str() {
	int A, B, C;
	long long result = 0;
	cin >> A >> B >> C;

	// 수
	result = A + B - C;
	cout << result << "\n";

	// 문자열
	string Astr = to_string(A);
	string Bstr = to_string(B);
	string Cstr = to_string(C);

	string AB = Astr + Bstr;

	long long ABnum = stoll(AB);
	long long Cnum = stoll(Cstr);
	long long strResult = ABnum - Cnum;

	cout << strResult << "\n";
}
