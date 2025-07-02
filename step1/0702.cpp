#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int main() {
	
}

void q3() {
	// 붙임성 좋은 총총이
	int n;
	cin >> n;

	set<string> dancer;
	string name, name2;
	dancer.insert("ChongChong");

	while (n--) {
		cin >> name >> name2;

		if (dancer.count(name) || dancer.count(name2)) {	// set 내부에 값이 들어있는지 확인 0(없으면), 1(있으면) 반환
			dancer.insert(name);
			dancer.insert(name2);
		}
	}

	cout << dancer.size();
}

void q4() {
	// 통계학
	int n, num, sum = 0;
	cin >> n;

	vector<int> v;
	unordered_map<int, int> freq; // 빈도수

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
		freq[v[i]]++;
		sum += v[i];
	}

	sort(v.begin(), v.end());

	// 최빈값 탐색
	int max_freq = 0;
	for (auto it : freq)
		max_freq = max(max_freq, it.second);

	vector<int> modes;
	for (auto it : freq) {
		if (it.second == max_freq)
			modes.push_back(it.first);
	}

	sort(modes.begin(), modes.end());

	// round : 소수 첫째 자리에서 반올림 -> #include <cmath>
	// (double)sum / n : 정확한 실수 나눗셈
	// (int) : 문제 요구에 따라 정수로 출력
	cout << (int)round((double)sum / n) << "\n";		// 산술평균

	cout << v[n / 2] << "\n";		// 중앙값

	// 최빈값이 여러 개일 경우 두 번째로 작은 값
	if (modes.size() >= 2)
		cout << modes[1] << '\n';
	else
		cout << modes[0] << '\n';
	cout << v.back() - v.front();	// 범위

	// 범위를 구하는 또 다른 방법
	// max_element, min_element -> algorithm
	/*int max_val = *max_element(v.begin(), v.end());
	int min_val = *min_element(v.begin(), v.end());*/
	// max_val - min_val;
}
