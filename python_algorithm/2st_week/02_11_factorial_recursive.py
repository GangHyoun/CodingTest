# 반복되는 코드가 진행될 경우 재귀함수를 사용하는 것을 고려해 봐야함
# factorial은 재귀로도 풀 수 있지만 dp나 다른 방식으로도 풀 수 있다
# 이번에는 재귀로 풀어보는 것을 택

# 수학 문제가 나오면 최대한 수학 수식을 써볼 것
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n-1)


print(factorial(5))