# 회문 : for
input = "abcba"

def is_palindrome(string):
    n= len(string)
    for i in range(n): # i = 0 ~ n-1 만큼 돌게 되어 있음
        if string[i] != string[n - 1 - i]:
            return False
    return True


print(is_palindrome(input))