class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Stack의 특징
# 1. 한 곳에서만 자료를 넣고 뺄 수 있음
# 2. LIFO -> Last In First Out  :  가장 마지막에 넣은 값이 가장 빠르게 나옴

# push(data) : 맨 앞에 데이터 넣기
# pop() : 맨 앞의 데이터 뽑기
# peek() : 맨 앞의 데이터 보기
# isEmpty(): 스택이 비었는지 안 비었는지 여부 반환해주기

class Stack:
    def __init__(self):
        self.head = None
    
    def push(self, value): 
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node
        return

    # pop 기능 구현
    def pop(self):
        if self.is_empty():
            return "Stack is Empty"
        node = self.head
        self.head = node.next
        return node

    def peek(self):
        if self.is_empty():
            return "Stack is Empty"
        return self.head.data

    # isEmpty 기능 구현
    def is_empty(self):
        return self.head is None

stack = Stack()

stack.push(4)
print(stack.peek())
stack.push(5)
print(stack.peek())
stack.push(6)
print(stack.peek())

stack.pop()
print(stack.peek())

print("stack is Empty?", stack.is_empty())

stack.pop()
print(stack.peek())

stack.pop()
print(stack.peek())

stack.pop()
print(stack.peek())

print("stack is Empty?",stack.is_empty())