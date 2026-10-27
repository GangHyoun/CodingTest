# Q. 정수를 입력 했을 때, 그 정수 이하의 소수를 모두 반환하시오. 
#   소수는 자신보다 작은 두 개의 자연수를 곱하여 만들 수 없는 1보다 큰 자연수이다.
#   20이하의 소수 = [2, 3, 5, 7, 11, 13, 17, 19]
input = 100

def find_prime_list_under_number(number):
    result = []

    if number >= 2:
        result.append(2)
        if number >= 3:
            result.append(3)
    for i in range(number):
        if i > 2: # 2 이하의 숫자는 배제
            if i % 2 != 0 and i % 3 != 0:
                result.append(i)
                
    return result


result = find_prime_list_under_number(input)
print(result)