all_students = ["나연", "정연", "모모", "사나", "지효", "미나", "다현", "채영", "쯔위"]
present_students = ["정연", "모모", "채영", "쯔위", "사나", "나연", "미나", "다현"]

# 제일 간단한 풀이 법은 이중 for문으로 하나씩 비교하면서 안 나온 사람의 이름 찾기

def get_absent_student(all_array, present_array):
    for name in all_array:
        present_count = 0
        # print("비교 대상 이름:", name)
        for present_name in present_array:
            if name == present_name:
                # print(present_count, present_name)
                break

            if name != present_name:
                present_count += 1

            if present_count == len(present_array):
                return name

    return None


print(get_absent_student(all_students, present_students))

print("정답 = 예지 / 현재 풀이 값 = ",get_absent_student(["류진","예지","채령","리아","유나"],["리아","류진","채령","유나"]))
print("정답 = RM / 현재 풀이 값 = ",get_absent_student(["정국","진","뷔","슈가","지민","RM"],["뷔","정국","지민","진","슈가"]))
print("정답 = 창섭 / 현재 풀이 값 = ",get_absent_student(["은광","민혁","창섭","현식","프니엘","성재"],["은광","민혁","현식","프니엘","성재"]))