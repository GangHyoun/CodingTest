# dictionary 는 키값과 value를 저장하기 위해 hash 함수를 사용함

dict = {"fast": "빠른"}

# put(key, value) -> dictionary의 key에 해당하는 곳에 value를 저장 해두겠다는 의미로 사용
# get(key) -> dictionary의 key에 해당하는 value를 반환하는 메서드

class Dict:
    def __init__(self):
        self.items = [None] * 8

    def put(self, key, value):
        index = hash(key) % len(self.items)
        self.items[index] = value

    def get(self, key):
        index = hash(key) % len(self.items)
        return self.items[index]

# 문제는 이렇게 했을 때 index의 값이 랜덤이기 때문에 계속 값을 넣다가 중복되어 검색 시 원하는 데이터가 
# 나오지 않을 수 도 있음
# 같은 배열에 index로 맵핑이 되어 데이터를 덮어씌우는 결과가 발생하는 경우를 "충돌(Collision)"이라고 함

# 이 충돌(Collision)을 해결하는 방법에는

# Chaining(체이닝) 사용 : LinkedList 사용해서 관리 => 대표적
# 개방 주소 법(Open Addressing) : 배열의 다음 남는 공간에 넣는 방법

my_dict = Dict()
my_dict.put("test", 3)
print(my_dict.get("test"))
