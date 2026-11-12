class MaxHeap:
    def __init__(self):
        self.items = [None]

    def insert(self, value):
        self.items.append(value)
        cur_index = len(self.items) - 1

        while cur_index > 1:  # cur_index 가 1이 되면 정상을 찍은거라 다른 것과 비교 안하셔도 됩니다!
            parent_index = cur_index // 2
            if self.items[parent_index] < self.items[cur_index]:
                self.items[parent_index], self.items[cur_index] = self.items[cur_index], self.items[parent_index]
                cur_index = parent_index
            else:
                break

    def delete(self):
        # root와 맨 끝 위치 변경
        self.items[1], self.items[-1] = self.items[-1], self.items[1] # 파이썬에서는 배열의 마지막 인덱스를 -1로 접근 할 수 있음
        prev_max = self.items.pop()

        cur_index = 1

        # 마지막 자식 노드가 있는 레벨까지 반복 or 내가 자식 보다 클 때까지
        while cur_index <= len(self.items) - 1: # 어차피 마지막 원소에 도달 할 때까지만 반복 필요
            left_child_index = cur_index *2
            right_child_index = cur_index *2 + 1
            max_index = cur_index

            # 바뀐 root와 자식 비교
            if left_child_index <= len(self.items) - 1 and self.items[left_child_index] > self.items[max_index]: # 현재 범위 내에 있는지 점검
                max_index = left_child_index
            if right_child_index <= len(self.items) -1 and self.items[right_child_index] > self.items[max_index]:
                max_index = right_child_index

            if max_index == cur_index:
                break

            # 자식이 더 크면 큰 자식과 위치 변경
            self.items[cur_index], self.items[max_index] = self.items[max_index], self.items[cur_index]
            cur_index = max_index   

        # 바뀐 루트 노드 반환
        return prev_max


max_heap = MaxHeap()
max_heap.insert(8)
max_heap.insert(6)
max_heap.insert(7)
max_heap.insert(2)
max_heap.insert(5)
max_heap.insert(4)
print(max_heap.items)  # [None, 8, 6, 7, 2, 5, 4]
print(max_heap.delete())  # 8 을 반환해야 합니다!
print(max_heap.items)  # [None, 7, 6, 4, 2, 5]