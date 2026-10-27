# Q. 
# 0과 1로만 이루어진 문자열이 주어졌을 때, 이 문자열에 있는 모든 숫자를 전부 같게 만들려고 한다. 
# 할 수 있는 행동은 문자열에서 연속된 하나 이상의 숫자를 잡고 모두 뒤집는 것이다. 뒤집는 것은 1을 0으로, 0을 1로 바꾸는 것을 의미한다.

# 예를 들어 S=0001100 일 때,

# 전체를 뒤집으면 1110011이 된다.
# 4번째 문자부터 5번째 문자까지 뒤집으면 1111111이 되어서 2번 만에 모두 같은 숫자로 만들 수 있다.
# 하지만, 처음부터 4번째 문자부터 5번째 문자까지 문자를 뒤집으면 한 번에 0000000이 되어서 1번 만에 모두 같은 숫자로 만들 수 있다.

# 주어진 문자열을 모두 0 혹은 모두 1로 같게 만드는 최소 횟수를 반환하시오.

# input = "011110"
input = "0001100"

def find_count_to_turn_out_to_all_zero_or_all_one(string):
    # 달라지는 부분을 배열에 저장해서 풀려고 했음
    # temp = string[0]
    # find_index = []
    # for i in string:
    #     if(i != temp):
    #         find_index.append(i)
    #     temp = i

    # if not find_index:
    #     return 0

    # if len(string) % 2 >= len(find_index):

    # 0이 아니면 0으로 바꾸고 count_0 증가 
    # 1이 아니면 1로 바꾸고 count_1 증가
    # 두 카운트 비교 후 작은 숫자 반환

    count_0 = 0
    count_1 = 0

    # 첫 글자는 첫 번째 그룹의 시작
    if string[0] == "0":
        count_0 += 1
    else:
        count_1 += 1

    # 이전 글자와 다른 지점마다 새 그룹이 시작됨
    for i in range(1, len(string)):
        if string[i] != string[i - 1]:
            if string[i] == "0":
                count_0 += 1
            else:
                count_1 += 1

    return min(count_0, count_1)


result = find_count_to_turn_out_to_all_zero_or_all_one(input)
print(result)