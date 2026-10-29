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

    def print_all(self):
        cur = self.head
        while cur is not None:
            print(cur.data)
            cur = cur.next

    def get_node(self, index):
        node = self.head
        count = 0
        while count < index:
            node = node.next
            count += 1
        return node

# index 번째에 value 값을 가진 Node 추가하기
# 현재 index에 위치하는 값을 찾아서 temp라는 임시 head에 연결하고
# 추가하는 노드를 index 위치에서 앞의 노드와 연결하고
# temp에 연결된 노드를 index 위치 뒤에 연결
    def add_node(self, index, value):
        new_node = Node(value)

        if index == 0:
            # 새로운 값이 기존의 head가 가리키는 값 => 0번째 인덱스의 노드를 가리키게 만듦
            new_node.next = self.head
            # new_node를 새로운 head로 지정
            self.head = new_node
            return 

        # index-1 번째 노드 값 구하기
        prev_node = self.get_node(index -1)

        # 원래 index 번째에 위치한 노드의 값을 저장
        next_node = prev_node.next

        # 새 노드를 이전 노드(prev_node)와 연결
        prev_node.next = new_node

        # 새 노드(new_node)와 저장해둔 노드(next_node)를 연결
        new_node.next = next_node

        return "index 위ㅣ치에 value를 가진 Node를 추가해주세요!"


linked_list = LinkedList(5)
linked_list.append(12)
linked_list.print_all()
print("----------")
linked_list.add_node(1, 10)
linked_list.print_all()
print("----------")
linked_list.append(8)
linked_list.add_node(0, 3)
linked_list.print_all()