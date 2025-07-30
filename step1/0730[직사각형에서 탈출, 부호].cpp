#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    

	return 0;
}

// 직사각형에서 탈출 [1085]
void q1() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int minDistance = min({ x, y, w - x, h - y });

	cout << minDistance << "\n";
}

// 부호 [1247]
void q2() {
    for (int t = 0; t < 3; t++) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }

        if (sum > 0) cout << "+\n";
        else if (sum < 0) cout << "-\n";
        else cout << "0\n";
    }

    // __int128 : GCC 기반 환경에서만 사용 가능
    /*for (int t = 0; t < 3; t++) {
        int n;
        cin >> n;

        __int128 sum = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }

        if (sum > 0) cout << "+\n";
        else if (sum < 0) cout << "-\n";
        else cout << "0\n";
    }*/
}
