class MaxHeap:
    def __init__(self):
        self.items = [None]

    def insert(self, value):
        self.items.append(value)
        cur_index = len(self.items) -1
        while cur_index != 1: # index가 1이면 루트 노드이기 때문
            parent_index = cur_index//2

            # 부모노드와 비교 후 현재 값이 더 크면 위치 변경
            if self.items[cur_index] > self.items[parent_index]:
                self.items[cur_index] , self.items[parent_index] = self.items[parent_index], self.items[cur_index]
                cur_index = parent_index # 현재 cur_index의 위치가 변경된 것을 알림
            # 부모노드와 비교 후 현재 값이 더 작으면
            else:
                break
            
        return self.items


max_heap = MaxHeap()
max_heap.insert(3)
max_heap.insert(4)
max_heap.insert(2)
max_heap.insert(9)
print(max_heap.items)  # [None, 9, 4, 2, 3] 가 출력되어야 합니다!
