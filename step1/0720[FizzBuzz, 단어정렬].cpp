#include <iostream>
#include <string> // for std::stoi()
#include <cctype> // 문자 판별(숫자인지 확인용)
// string
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void PrintFizzBuzz(int obj)
{
	if (obj % 3 == 0 && obj % 5 == 0) // 3과 5의 공배수인 경우
		cout << "FizzBuzz";
	else if (obj % 3 == 0) // 3의 배수인 경우
		cout << "Fizz";
	else if (obj % 5 == 0) // 5의 배수인 경우
		cout << "Buzz";
	else // 3의 배수도 5의 배수도 아닌 경우
		cout << obj;
}

// 정렬 기준 함수
bool compare(const string& a, const string& b) {
	if (a.length() != b.length()) return a.length() < b.length(); // 길이가 짧은 것 우선
	return a < b; // 길이가 같다면 사전순
}

int main()
{
	


	return 0;
}

// FizzBuzz [28702]
void q1() {
	string str[3];

	// 문자열 배열에 입력값 받기
	for (int i = 0; i < 3; i++)
		cin >> str[i];

	// 입력된 값이 숫자인지 판단
	bool isint[3];
	for (int i = 0; i < 3; i++)
	{
		isint[i] = true; // 숫자라고 가정
		for (char ch : str[i])
		{
			if (!isdigit(ch)) // 숫자가 아닌 문자가 포함된 경우
			{
				isint[i] = false; // 숫자가 아니라고 저장
				break;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (isint[i])
		{
			PrintFizzBuzz(stoi(str[i]) + (3 - i)); // stoi(str[i]) : 정수 변환
			break; // 첫 번째 숫자를 찾은 뒤 루프 종료
		}
	}
}


// 단어정렬 [1181]
void q2() {
	int n;
	cin >> n;

	set<string> wordSet; // 중복 제거를 위한 set

	for (int i = 0; i < n; ++i) {
		string word;
		cin >> word;
		wordSet.insert(word); // 중복 제거하면서 삽입
	}

	vector<string> words(wordSet.begin(), wordSet.end()); // set -> vector로 변환
	sort(words.begin(), words.end(), compare); // 정렬 수행 -> compare 결과가 true인지 false인지에 따라 순서 바뀜 여부 결정

	for (const string& word : words) {
		cout << word << '\n'; // 정렬된 단어 출력
	}
}
