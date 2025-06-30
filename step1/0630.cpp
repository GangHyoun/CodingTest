#include<iostream>
#include<deque>
using namespace std;

deque<int> dq;
int n, m;
bool flag[100001]; //0:queue, 1:stack

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
}

void q11() {
  cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> flag[i];
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (flag[i] == 0) //queue일때만 deque에 원소 삽입
            dq.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        dq.push_front(y);
        cout << dq.back() << " ";
        dq.pop_back();

    }
    //전부 stack일 경우, dq에 미리 넣는 과정없이  새 dq에 push_front, pop_back과정 반복하면 됨.

}

void q10() {
    int N;
    cin >> N;

    // pair : 두 개의 값을 한 쌍으로 묶을 수 있음
    deque<pair<int, int>> d; // {풍선 번호, 종이 값}
    for (int i = 1; i <= N; i++) {
        int value;
        cin >> value;
        d.push_back({ i, value });
    }

    while (!d.empty()) {
        // 1번 위치의 풍선
        int index = d.front().first;
        int move = d.front().second;
        d.pop_front();

        cout << index << " ";

        // 이동할 값이 양수면 왼쪽으로 (앞에서 pop -> 뒤로 push), 음수면 오른쪽으로 (뒤에서 pop -> 앞에 push)
        if (d.empty()) break;

        if (move > 0) {
            // move - 1번만 이동 (이미 한 번 pop 했으므로)
            for (int i = 0; i < move - 1; i++) {
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else {
            for (int i = 0; i < -move; i++) {
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
}
