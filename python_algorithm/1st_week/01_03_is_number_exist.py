# 시간 복잡도
    # 빅오 -> 최악의 경우 => O(N)
    # 빅오메가 -> 최선의 경우 => 오메가(1)

def is_number_exist(number, array):
    # i는 배열의 요소 값이 됨
    for i in array:     # array의 길이 만큼 아래 연산이 실행
        if(i == number):      # 비교 연산 1회
            return True             # 시간복잡도는 N
    return False


result = is_number_exist
print("정답 = True 현재 풀이 값 =", result(3, [3,5,6,1,2,4]))
print("정답 = Flase 현재 풀이 값 =", result(7, [6,6,6]))
print("정답 = True 현재 풀이 값 =", result(2, [6,9,2,7,1888]))