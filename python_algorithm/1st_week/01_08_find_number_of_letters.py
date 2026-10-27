# Q.
# 1. 입력으로 소문자의 알파벳 순으로 정렬된 문자열이 입력됩니다.
# 2. 각 알파벳은 중복이 가능합니다.
# 3. 중간에 없는 알파벳이 있을 수도 있습니다.
#    입력,출력 예시와 같이 입력 문자열에 나타나는 각 알파벳의 종류,갯수를 요약하여 나타내시오.

# 알파벳 갯수를 담을 배열 number_of_letters을 생성하고 
# input_str의 문자 값을 확인하면서 생성한 배열에 ord를 활용해 각 알파벳 위치에 맞는 값을 +1
# input_str의 문자 값과 number_of_letters의 인덱스 값을 구해
# 해당 인덱스의 값이 1초과면 다음 검사는 값-1한 값은 스킵하고 넘어가면서 출력한다
def summarize_string(input_str):
    number_of_letters = [0]*26
    for alphabet in input_str:
        number_of_letters[ord(alphabet)- ord('a')] += 1

    result = []
    for i in range(26):
        if number_of_letters[i] > 0:
            char = chr(i + ord('a'))
            count = number_of_letters[i]
            result.append(f"{char}{count}")
            
    return "/".join(result)
    


input_str = "acccdeee"

print(summarize_string(input_str))