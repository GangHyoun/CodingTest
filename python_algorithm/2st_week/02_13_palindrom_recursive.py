# 회문 : 재귀함수
# 재귀함수는 문제의 범위를 조금씩 좁혀 나가는 것

input = "abcba"

def is_palindrome(string):
    # abcba 에서 [a] bcb [a] 비교 후 같으면 아래로
    if string[0] != string[-1]:
        return False

    # 한 글자 일 경우
    if len(string) <= 1:
        return True
    
    # 0, n-1  => 1, n-2 : bcb를 넣은 문자열을 재귀로 호출
    return is_palindrome(string[1:-1]) # -1 : 맨 뒤에 있는 인덱스의 앞까지를 의미

print(is_palindrome(input))