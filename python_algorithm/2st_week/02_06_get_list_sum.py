class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self, value):
        self.head = Node(value)

    def append(self, value):
        cur = self.head
        while cur.next is not None:
            cur = cur.next
        cur.next = Node(value)

# 내가 생각한 방식
# def return_num(linked_list):
#     num = 0
#     node = linked_list.head
#     for i in range(3):
#             if i == 0:
#                 num += node.data * 100
#             if i == 1:
#                 num += node.data * 10
#             if i == 2:
#                 num += node.data * 1

#             node = node.next

#     return num

# 강의 답안
def get_single_linked_list_sum(linked_list):
    sum = 0
    cur = linked_list.head
    while cur is not None:
        sum = sum * 10 + cur.data
        cur = cur.next

    return sum

def get_linked_list_sum(linked_list_1, linked_list_2):
    num_1 = get_single_linked_list_sum(linked_list_1)
    num_2 = get_single_linked_list_sum(linked_list_2)
    print(num_1, num_2)

    return num_1 + num_2


linked_list_1 = LinkedList(6)
linked_list_1.append(7)
linked_list_1.append(8)

linked_list_2 = LinkedList(3)
linked_list_2.append(5)
linked_list_2.append(4)

print(get_linked_list_sum(linked_list_1, linked_list_2))