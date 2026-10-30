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

    # 강의에서 제시한 방식 1
    # def get_kth_node_from_last(self, k):
    #     length = 1 # 시작 노드의 길이를 알기 위해 1부터 시작
    #     cur = self.head

    #     while cur.next is not None:
    #         cur = cur.next
    #         length += 1

    #     print("length is", length)
    #     end_length = length - k # length에서 k만큼을 뺀 길이만큼 이동하고자 함
    #     cur = self.head         # cur 노드 위치 초기화

    #     for i in range(end_length):
    #         cur = cur.next

    #     return cur

    # 위의 코드 개선 할 수 있음
    # 왜?
        # 현재 코드 흐름
        # 1. 우선 모든 linkedLikst의 길이 구함
        # 2. LinkedList의 길이에서 k만큼 빼고, 그만큼 이동시킴
        # 3. 그 노드를 반환

    # fast와 slow라는 포인터를 이용해 검색하는 방식
        # K만큼의 길이가 차이나는 두 포인터를 이용
        # K만큼 떨어져 있으면 fast가 끝에 도달했을 때
        # slow의 위치가 끝에서 k번째 뒤에 있는 위치가 됨

    def get_kth_node_from_last(self, k):
            slow = self.head
            fast = self.head

            # fast를 k만큼 이동
            for i in range(k):
                 fast = fast.next

            while fast is not None:
                 slow = slow.next
                 fast = fast.next
    
            return slow

    

linked_list = LinkedList(6)
linked_list.append(7)
linked_list.append(8)

print(linked_list.get_kth_node_from_last(2).data)  # 7이 나와야 합니다!