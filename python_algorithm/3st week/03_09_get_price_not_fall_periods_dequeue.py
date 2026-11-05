from collections import deque
queue = deque()
prices = [1, 2, 3, 2, 3]

# answer라는 배열에 반복문을 돌면서 몇 초 걸리는지 저장
# 반복문에서 만약 값이 떨어진 적이 없다면 answer[i] += 1
# 만약 떨어지면 answer[i] += 1 break
def get_price_not_fall_periods(prices):
    result = []
    prices_queue = deque(prices) # 배열을 큐 생성 시 전달하면 배열의 값을 큐로 활용할 수 있음
    while prices_queue: # prices_queue가 비어있지 않을 경우 계속 반복
        price_not_fall_periods = 0
        current_price = prices_queue.popleft()
        for next_price in prices_queue:
            if current_price <= next_price:
                price_not_fall_periods += 1
            else:
                price_not_fall_periods += 1
                break
        result.append(price_not_fall_periods)
    return result
    


print(get_price_not_fall_periods(prices))

print("정답 = [4, 3, 1, 1, 0] / 현재 풀이 값 = ", get_price_not_fall_periods(prices))
print("정답 = [6, 2, 1, 3, 2, 1, 0] / 현재 풀이 값 = ", get_price_not_fall_periods([3, 9, 9, 3, 5, 7, 2]))
print("정답 = [6, 1, 4, 3, 1, 1, 0] / 현재 풀이 값 = ", get_price_not_fall_periods([1, 5, 3, 6, 7, 6, 5]))