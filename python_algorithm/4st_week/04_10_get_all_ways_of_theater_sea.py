# CGV 좌석 경우의 수 구하기

# 1. [1, 2] -> 2, [1,2,3] -> 3, [1,2,3,4] -> 5 [1,2,3,4,5] -> 8가지의 경우의 수
# => 즉, 피보나치의 수

# 2. 점화식을 통해 파악
#    좌석이 n개 존재 : 1 2 3 .... n-2 n-1 n
#    
#   Q1. n번째 티켓을 가진 사람이 앉을 수 있는 경우의 수는? 
#    => n번째 좌석에 앉음 : 좌석은 n-1 개가 남았고, 사람도 n-1 번째 티켓까지 가진 사람이 있음
#    => n-1번째 좌석에 앉음 :  n-1번째 티켓을 가진 사람은 n번째 좌석에 앉아야만 함 [N-1명의 사람들을 좌석에 배치하는 방법 = F(N-1)]
#       -> n-2개의 좌석과 n-2번째까지의 사람이 남음 [N-2명의 사람들을 좌석에 배치하는 방법 = F(N-2)]
#
# => 수식으로 정리 : F(N)
#    F(N) N명의 사람들을 좌석에 배치하는 방법
#    F(N) = F(N-1) + F(N-2)


# 피보나치 수열(DP) 코드
# memo 라는 변수에 Fibo(1)과 Fibo(2) 값을 저장해놨습니다!
memo = {
    1: 1,
    2: 2
}

# 1. 메모에 이미 해당 값이 있으면 반환
# 2. 만약 없으면, 그 값을 피보나치를 통해 구해 메모에 저장
def fibo_dynamic_programming(n, fibo_memo):
    # 값이 있는지 확인
    if n in fibo_memo:
        return fibo_memo[n]

    # 값이 없을 경우
    nth_fibo = fibo_dynamic_programming(n - 1, fibo_memo) + fibo_dynamic_programming(n-2, fibo_memo)
    fibo_memo[n] = nth_fibo
    
    return nth_fibo

seat_count = 9
vip_seat_array = [4, 7]



def get_all_ways_of_theater_seat(total_count, fixed_seat_array):
    all_ways = 1 # 어느 경우에도 최소 1가지의 경우의 수는 나옴
    current_index = 0

    for fixed_seat in fixed_seat_array:
        fixed_seat_index = fixed_seat - 1
        count_of_ways = fibo_dynamic_programming(fixed_seat_index - current_index, memo) # 만들 수 있는 경우의 수
        all_ways *= count_of_ways
        current_index = fixed_seat_index + 1

    count_of_ways = fibo_dynamic_programming(total_count - current_index, memo)
    all_ways *= count_of_ways

    return all_ways


# 12가 출력되어야 합니다!
print(get_all_ways_of_theater_seat(seat_count, vip_seat_array))