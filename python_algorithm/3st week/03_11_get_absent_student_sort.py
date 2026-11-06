all_students = ["나연", "정연", "모모", "사나", "지효", "미나", "다현", "채영", "쯔위"]
present_students = ["정연", "모모", "채영", "쯔위", "사나", "나연", "미나", "다현"]

# 이중반복 O(N^2)

# 정렬 O(NlogN)
# 정렬 이후 하나하나 원소들을 보면서 존재하지 않는 학생을 찾으면 결석한 사람을 찾을 수 있음

# Dictionary, Hash table O(N)
# all_students를 돌면서, hash table의 키값에 해당 학생들을 등록함
# present_students를 돌면서 hash table의 키값의 값을 제거
# 그리고 남아있는 hash table의 키 값에 해당하는 학생은 결석 한 것
def get_absent_student(all_array, present_array):
    dict = {}
    for student in all_array:
        dict[student] = True

    for present_student in present_array:
        del dict[present_student]

    for key in dict.keys():
        return key


print(get_absent_student(all_students, present_students))

print("정답 = 예지 / 현재 풀이 값 = ",get_absent_student(["류진","예지","채령","리아","유나"],["리아","류진","채령","유나"]))
print("정답 = RM / 현재 풀이 값 = ",get_absent_student(["정국","진","뷔","슈가","지민","RM"],["뷔","정국","지민","진","슈가"]))
print("정답 = 창섭 / 현재 풀이 값 = ",get_absent_student(["은광","민혁","창섭","현식","프니엘","성재"],["은광","민혁","현식","프니엘","성재"]))