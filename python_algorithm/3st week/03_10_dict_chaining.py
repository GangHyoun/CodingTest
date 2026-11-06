dict = {"fast": "빠른"}

# Chaining(체이닝) 사용 : LinkedList 사용해서 관리

class LinkedTuple:
    def __init__(self):
        self.items = []

    def add(self, key, value):
        self.items.append((key, value))

    def get(self, key):
        for k, v in self.items:
            if k == key:
                return v

            
linkedTuple = LinkedTuple()

linkedTuple.add("333", 7)
linkedTuple.add("77", 6)

print(linkedTuple.items)

print(linkedTuple.get("333"))


class LinkedDict:
    def __init__(self):
        self.items = []
        for i in range(8):
            self.items.append(LinkedTuple())

    def put(self, key, value):
        index = hash(key) % len(self.items)

        self.items[index].add(key, value) # index번째의 LinkedTuple [(key, value)]
                                          # 한 번 더 호출되면?
                                          # index 번째의 LinkedTuple [(key, value), (key2, value2)]
    def get(self, key):
        index = hash(key) % len(self.items)
        return self.items[index].get(key) #LinkedTuple [(key, value), (key2, value2)]