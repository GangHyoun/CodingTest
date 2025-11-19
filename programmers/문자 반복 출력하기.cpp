#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++){
        char c = my_string[i];
        for(int j = 0; j < n; j++){
            answer += c;
        }
    }
    return answer;
}

// 다른 사람의 풀이 방식
string solution(string my_string, int n) {
    string answer = "";
  // v라는 변수에 my_string의 문자가 자동으로 들어간다(순서대로)
  // v의 타입은 auto와 my_string을 통해 자동으로 지정됨
    for(const auto v : my_string)
    {
      // 첫 번째 인자 n은 생성할 문자의 개수 지정(반복 횟수)
      // 두 번째 인자 v는 반복해서 사용할 문자 지정
      // 여기서 string 위치에 클래스(list, array, vector, string...)를 사용할 수 있다
        answer += string(n,v);
    }
    return answer;
}
