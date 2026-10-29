finding_target = 14
finding_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]

# 연산이 반씩 쪼개진다 => 대부분 시간복잡도는 O(log(N))이다

# 내가 생각한 버전
# def is_existing_target_number_binary(target, array):
#     if len(array) // 2 < target: # 타겟이 더 클 경우
#         for i in range(len(array)-1, -1, -1):
#             if array[i] == target:
#                 return True
#             else:
#                 continue
#     else: # 타겟이 같거나 더 작을 경우
#         for i in range(len(array)-1):
#             if array[i] == target:
#                 return True
#             else:
#                 continue
#     return False

# 이진탐색 기법으로 해결한 버전
def is_existing_target_number_binary(target, array):
    current_min = 0             # 최소 인덱스
    current_max = len(array)-1  # 최대 인덱스
    current_guess = (current_min + current_max) // 2 # 추측 할 중간 값

    while current_min <= current_max:
        if array[current_guess] == target:
            return True
        elif array[current_guess] < target:
            current_min = current_guess + 1
            current_guess = (current_min + current_max) // 2
        else: # array[current_guess] > target:
            current_max = current_guess -1
            current_guess = (current_min + current_max) // 2
    return False


result = is_existing_target_number_binary(finding_target, finding_numbers)
print(result)