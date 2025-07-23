#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {


	return 0;
}

// 덩치 [7568]
void q1() {
	int n;
	cin >> n;

	vector<pair<int, int>> v(n);
	vector<int> check(n, 1);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (v[j].first > v[i].first && v[j].second > v[i].second) {
				check[i]++;
			}
		}
		cout << check[i] << " ";
	}
}


// 나이순 정렬 [10814]
void q2() {
	int n;
	cin >> n;

	vector<pair<int, string>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	// get<>() : tuple에서 특정 인덱스 값을 꺼내는 함수
	//sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
	//	if (get<0>(a) == get<0>(b)) return get<1>(a) < get<1>(b); // 가입순서 비교
	//	return a.first < b.first;
	//	});

	// stable_sort() : 같은 값끼리는 기존 입력 순서를 유지하는 정렬 알고리즘
	stable_sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
		});

	for (auto& p : v) {
		cout << p.first << " " << p.second << '\n';
	}
}
