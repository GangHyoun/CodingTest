#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}


void q5() {
    int n;
    cin >> n;

    queue<int> line;        // 대기열 (큐)
    vector<int> side;       // 보조 공간 (스택)

    // 대기열에 학생들 추가
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        line.push(num);
    }

    int order = 1; // 현재 간식을 받아야 할 번호

    // 대기열 우선 처리
    while (!line.empty()) {
        if (line.front() == order) {
            line.pop();
            order++;
        }
        else {
            // 보조 공간에서 순서 확인
            if (!side.empty() && side.back() == order) {
                side.pop_back();
                order++;
            }
            // 보조 공간에 순서가 아닌 값 넣기
            else {
                side.push_back(line.front());
                line.pop();
            }
        }
    }

    // 보조 공간에 남은 학생 처리
    while (!side.empty()) {
        if (side.back() == order) {
            side.pop_back();
            order++;
        }
        else {
            break;
        }
    }

    if (order == n + 1)
        cout << "Nice" << endl;
    else
        cout << "Sad" << endl;
}

void q6() {
    int n;
    cin >> n;

    string command;
    int num;
    queue<int> q;

    while (n--) {

        cin >> command;

        if (command == "push") {
            cin >> num;
            q.push(num);
        }
        else if (command == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (command == "size") {
            cout << q.size() << "\n";
        }
        else if (command == "empty") {
            if (!q.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
        }
        else if (command == "front") {
            if (!q.empty()) {
                cout << q.front() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (command == "back") {
            if (!q.empty()) {
                cout << q.back() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
}

void q7() {
    int n;
    cin >> n;

    queue<int> q;

    for (int i = 1; i <= n; i++)
        q.push(i);

    for (int i = 1; q.size() > 1; i++) {
        int temp = 0;
        // 짝수인 경우
        if (i % 2 == 0) {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        // 홀수인 경우
        else {
            q.pop();
        }
    }

    cout << q.front() << "\n";
}

void q8() {
    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }


    cout << "<";
    while (!q.empty()) {
        for (int i = 1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (!q.empty()) cout << ", ";
    }
    cout << ">\n";
}

void q9() {
    int n, num, command;
    cin >> n;

    deque<int> d;

    while (n--) {
        cin >> command;
        if (command == 1) {
            cin >> num;
            d.push_front(num);
        }
        else if (command == 2) {
            cin >> num;
            d.push_back(num);
        }
        else if (command == 3) {
            if (!d.empty()) {
                cout << d.front() << "\n";
                d.pop_front();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (command == 4) {
            if (!d.empty()) {
                cout << d.back() << "\n";
                d.pop_back();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (command == 5) {
            cout << d.size() << "\n";
        }
        else if (command == 6) {
            if (!d.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
        }
        else if (command == 7) {
            if (!d.empty()) {
                cout << d.front() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (command == 8) {
            if (!d.empty()) {
                cout << d.back() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
}
