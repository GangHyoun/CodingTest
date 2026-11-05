prices = [1, 2, 3, 2, 3]

# answer라는 배열에 반복문을 돌면서 몇 초 걸리는지 저장
# 반복문에서 만약 값이 떨어진 적이 없다면 answer[i] += 1
# 만약 떨어지면 answer[i] += 1 break
def get_price_not_fall_periods(prices):
    answer = [0] * len(prices)
    for i in range(len(prices)):
        for j in range(i+1, len(prices)):
            if prices[i] <= prices[j]:
                answer[i] += 1
            else:
                answer[i]+=1
                break
    return answer
    


print(get_price_not_fall_periods(prices))

print("정답 = [4, 3, 1, 1, 0] / 현재 풀이 값 = ", get_price_not_fall_periods(prices))
print("정답 = [6, 2, 1, 3, 2, 1, 0] / 현재 풀이 값 = ", get_price_not_fall_periods([3, 9, 9, 3, 5, 7, 2]))
print("정답 = [6, 1, 4, 3, 1, 1, 0] / 현재 풀이 값 = ", get_price_not_fall_periods([1, 5, 3, 6, 7, 6, 5]))