# Q. 다음과 같이 영어로 되어 있는 문자열이 있을 때, 
#    이 문자열에서 반복되지 않는 첫번째 문자를 반환하시오.
#    만약 그런 문자가 없다면 _ 를 반환하시오.


# Sol )
# check_repeating_alphabet이라는 문자열 배열을 만들어서 string배열 한 자씩 검사해 나온 횟수를 계산
# string의 문자와 check_repeating_alphabet에서 1인 문자가 있는지 확인 후 있으면 해당 문자 바로 출력
# 없으면 "_" 반환
input = "abadabac"

def find_not_repeating_first_character(string):
    check_repeating_alphabet = [0]*26
    for alphabet in string:
        check_repeating_alphabet[ord(alphabet) - ord('a')] += 1

    for alphabet in string:
        if check_repeating_alphabet[ord(alphabet) - ord('a')] == 1:
            return alphabet
        
    return "_"
    
    


result = find_not_repeating_first_character
print("정답 = d 현재 풀이 값 =", result("abadabac"))
print("정답 = c 현재 풀이 값 =", result("aabbcddd"))
print("정답 = _ 현재 풀이 값 =", result("aaaaaaaa"))