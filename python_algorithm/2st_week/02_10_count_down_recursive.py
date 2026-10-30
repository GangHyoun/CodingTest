def count_down(number):
    if number < 0:
        return
    print(number)          # number를 출력하고
    count_down(number - 1) # count_down 함수를 number - 1 인자를 주고 다시 호출한다!


count_down(60)

# if number < 0:
#         return
# 위의 조건이 없으면 RecursionError 발생
#   => 왜?
#       60~0까지 센 뒤 -값으로 숫자를 무한하게 세고 있기 때문
# 재귀함수는 항상 탈출 조건이 필요함