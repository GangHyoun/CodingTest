#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	

	return 0;
}

// 큐[10845]
void q1() {
	int n;
	cin >> n;

	queue<int> q;

	while (n--) {
		string s;
		cin >> s;

		if (s == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (s == "pop") {
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (s == "size") {
			cout << q.size() << "\n";
		}
		else if (s == "empty") {
			if (!q.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << 1 << "\n";
			}
		}
		else if (s == "front") {
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (s == "back") {
			if (!q.empty()) {
				cout << q.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
}


// solved.ac [18110]
int q2() {
	int n;
	cin >> n;

	// 의견이 없는 경우
	if (n == 0) {
		cout << 0 << '\n';
		return 0;
	}

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int cut = round(n * 0.15); // 15%

	// 절사 평균
	int sum = 0;
	for (int i = cut; i < n - cut; i++) {
		sum += v[i];
	}

	int count = n - 2 * cut;
	double average = static_cast<double>(sum) / count;

	cout << (int)round(average) << "\n";
}
