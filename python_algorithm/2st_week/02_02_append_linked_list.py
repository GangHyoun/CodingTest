class Node:
    def __init__(self, data):
        self.data = data
        self.next = None # 최초의 노드는 연결하지 않고 생성만 함


class LinkedList:
    def __init__(self, value):
        self.head = Node(value)

# LinkedList의 가장 끝에 있는 노드에 새로운 노드를 연결
    def append(self, value):
        cur = self.head

        while cur.next is not None:
            cur = cur.next

        cur.next = Node(value)

#LinkedList가 올바르게 연결되었는지 확인하기 위한 메서드
    def print_all(self):
        cur = self.head

        while cur is not None:
            print(cur.data)
            cur = cur.next

linked_list = LinkedList(5)
print(linked_list.head.data)

linked_list.append(12)

linked_list.append(8)

linked_list.print_all()
