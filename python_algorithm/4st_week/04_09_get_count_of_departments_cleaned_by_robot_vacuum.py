from collections import deque

# 샤오미 로봇 청소기 문제 (BFS 활용)

# 북 : dr = -1, dc = 0
# 동 : dr = 0, dc = 1
# 남 : dr = 1, dc = 0
# 서 : dr = 0, dc = -1
dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]

# 북(0) 동(1) 남(2) 서(3) 

# 왼쪽으로 회전 : 현재 방향 + 3 % 4


current_r, current_c, current_d = 7, 4, 0
current_room_map = [
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 1, 1, 1, 1, 0, 1],
    [1, 0, 0, 1, 1, 0, 0, 0, 0, 1],
    [1, 0, 1, 1, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 1, 0, 1],
    [1, 0, 0, 0, 0, 0, 1, 1, 0, 1],
    [1, 0, 0, 0, 0, 0, 1, 1, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
]


# 왼쪽으로 가야 할 때 어느 방향으로 가야하는지 인덱스 구하기
def get_d_index_when_rotate_to_left(d):
    return (d + 3) % 4

# 후진 했을 때 어느 방향으로 가야하는지 인덱스 구하기
def get_d_index_when_go_back(d):
    return (d + 2) % 4

def get_count_of_departments_cleaned_by_robot_vacuum(r, c, d, room_map):
    n = len(room_map)
    m = len(room_map[0])
    count_of_departments_cleaned = 1
    # BFS 구현
    # > 루트 노드 큐에 넣기
    queue = deque([
        # 행, 열, 방향 한 번에 조회 가능
        [r,c,d] # 튜플이라 하나의 원소로 취급 됨
    ])

    # > 현재 큐의 노드를 빼서 visted에 추가
    while queue: # > 큐가 비면 탐색 종료
        r, c, d = queue.popleft()
        temp_d = d

        for i in range(4): # 4번의 방향 회전(현재 기준으로 동서남북 회전)
            temp_d = get_d_index_when_rotate_to_left(temp_d) # 북 -> 서

            # 현재 있는 r에 해당 방향을 가기 위한 변화량인 dr 값과 c + 해당 방향을 가기 위한 칼럼의 변화량 dc를 넣어줘서 구함
            new_r, new_c = r + dr[temp_d], c + dc[temp_d] 

            # 청소하지 않은 공간인지 여부를 0이 아닌지 여부를 통해 확인
            if 0 <= new_r < n and 0 <= new_c < m and room_map[new_r][new_c] == 0:
                count_of_departments_cleaned += 1
                room_map[new_r][new_c] = 2 # 0 : 청소 하지 않은 칸, 1 : 벽, 2 : 청소한 칸
                queue.append([new_r,new_c, temp_d])
                break

            # 4 방향 모두 청소가 되어있거나 벽인 경우, 바라보는 방향을 유지한 채로 한 칸 후진
            elif i == 3:
                temp_d = get_d_index_when_go_back(d)
                new_r, new_c = r + dr[temp_d], c + dc[temp_d]
                queue.append([new_r,new_c, d]) # 방향을 유지한 채 = d
                
                # 4방향 모두 청소가 완료 또는 벽이면서, 뒤쪽 방향이 벽이라 후진도 못 하는 경우 작동을 멈춤
                if room_map[new_r][new_c] == 1:
                    return count_of_departments_cleaned


    # > 현재 방문한 노드와 인접한 노드 중 방문하지 않은 노드를 큐에 추가
    # > 2부터 반복


# 57 가 출력되어야 합니다!
print(get_count_of_departments_cleaned_by_robot_vacuum(current_r, current_c, current_d, current_room_map))