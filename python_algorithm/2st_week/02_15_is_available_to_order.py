shop_menus = ["만두", "떡볶이", "오뎅", "사이다", "콜라"]
shop_orders = ["오뎅", "콜라", "만두"]

# 두 배열을 정렬해야함
# 정렬 후 orders에 들어있는 값이 menus에 있는지 하나하나 비교
def is_available_to_order(menus, orders):

    # O(NlogN) + O(M) + O(logN) = O((N+M)*log(N))
    menus.sort() # 메뉴 길이가 N => O(NlongN)
    for order in orders: # 오더의 길이가 M이라고 한다면 O(M)
        if not is_existing_target_number_binary(order, menus): # O(logN)
            return False
    return True


# 이진탐색
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


result = is_available_to_order(shop_menus, shop_orders)
print(result)