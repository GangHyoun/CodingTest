#include<iostream>
#include<string>
#include <vector>
using namespace std;

int main() {
    

    return 0;
}

// 심화1
void q4() {
    string str;
    cin >> str;

    int len = str.length();
    bool is_palindrome = true;

    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }

    cout << (is_palindrome ? 1 : 0);
}

void q7() {
    int n;
    cin >> n;

    int count = 0; // 그룹 단어 개수


    while (n--) {
        string word;
        cin >> word;


        // 1. happy
        // 2. abba

        bool isGroup = true;
        vector<bool> seen(26, false); // 알파벳 a-z 여부

        char prev = 0;
        for (char ch : word) {
            if (ch != prev) {   // 이전 알파벳과 다른 경우
                if (seen[ch - 'a']) {   // 이미 나온 알파벳인지 확인
                    isGroup = false;
                    break;
                }
                seen[ch - 'a'] = true; // 처음 나온 알파벳
            }
            prev = ch; // 이전 문자 갱신
        }
        if (isGroup) // 그룹 단어 개수 카운팅
            count++;
    }

    cout << count << "\n";
}
