# 문자열을 통한 최빈값 찾기
# isalpha() : 파이썬 내장 함수로 문자열이 알파벳인지 확인할 수 있음
# print("a".isalpha()) # True
# print("3".isalpha()) # False
# print("3".isdigit()) # True
# print("a".isdigit()) # False
# ASCII Code -> A-Z : 65~90, a-z : 97~122
# ord : 문자를 ASCII Code로 변환
# chr : ASCII Code를 문자로 변환

def find_max_num(array):
    max_index = 0
    for index in range(1, len(array)):
        if array[index] > array[max_index]:
            max_index = index
    return max_index

def find_max_occurred_alphabet(string):
    alphabet_occurrence_array = [0] * 26

    for index in range(len(string)):
        alpha_num = 0
        if(string[index].isalpha()):
            alpha_num = ord(string[index]) - ord('a')
            alphabet_occurrence_array[alpha_num] = alphabet_occurrence_array[alpha_num] + 1
            # print(chr(alpha_num+ord('a')), alphabet_occurrence_array[alpha_num])

    max_num = find_max_num(alphabet_occurrence_array)
    max_alphabet = chr(max_num + ord('a'))
    # print(max_alphabet)

    return max_alphabet


result = find_max_occurred_alphabet
print("정답 = i 현재 풀이 값 =", result("hello my name is dingcodingco"))
print("정답 = e 현재 풀이 값 =", result("we love algorithm"))
print("정답 = b 현재 풀이 값 =", result("best of best youtube"))

# 최빈값을 구하기 위해 
# 1. 알파벳 배열 생성
# 2. 반복문으로 차례대로 문자열을 문자 순으로 순회해서 알파벳 배열에 숫자 넣기
# 3. 알파벳 배열에서 가장 큰 값 계산