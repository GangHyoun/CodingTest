#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    

	return 0;
}

// 생장점[1703]
void q1() {
    while (true) {
        int age;
        cin >> age;
        if (age == 0) break;

        int leaf = 1; // 처음엔 잎이 1개

        for (int i = 0; i < age; i++) {
            int split, prune;
            cin >> split >> prune;

            // 가지 뻗기
            leaf *= split;

            // 가지치기
            leaf -= prune;
        }

        cout << leaf << '\n';
    }
}

// 플러그 [2010]
void q2() {
    int n;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        int plug;
        cin >> plug;
        total += plug;
    }

    cout << total - (n - 1) << "\n";
}
