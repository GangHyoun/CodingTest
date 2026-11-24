from collections import deque
maps = [
    [1,0,1,1,1],
    [1,0,1,0,1],
    [1,0,1,1,1],
    [1,1,1,0,1],
    [0,0,0,0,1]
    ]

# 상대 팀 진영을 먼저 파괴(도달)하면 승리 
# 최단 거리 => BFS

# n*m 행렬 : 0,1로 구성(0은 벽, 1은 벽이 없는 곳)
# 동, 서, 남, 북 방향으로 1칸씩 이동 할 수 있음
# 상대 진영에 도착 할 수 없는 경우 return -1
# 처음 캐릭터는 (0,0)위치에 있음
# 상대 진영은 (n,m) 위치에 있음

def solution(maps):
    n, m = len(maps), len(maps[0]) # n = maps의 세로 개수(2차원 배열 안의 1차원 배열 개수), m = maps의 가로 개수(2차원 배열을 이루는 1차원 배열 내부의 index 개수)
    dist = [[0] * m for _ in range(n)] # 각 칸까지의 거리를 기록할 2차원 리스트 생성 (방문 x : 0)
    dist[0][0] = 1 # 시작 지점 (0,0)을 1로 설정

    queue = deque([(0, 0)]) # BFS를 시작할 위치인 (0, 0)을 큐에 넣기
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)] # 좌표의 이동 변화량 

    while queue:
        x, y = queue.popleft() # 큐의 가장 앞의 값이 현재 위치

        if (x, y) == (n - 1, m - 1): # 상대진영에 도달한 최단거리 반환
            return dist[x][y]

        for dx, dy in directions: # 네 가지 방향을 하나씩 확인
            nx, ny = x + dx, y + dy # 현재 위치 (x, y)에서 해당 방향으로 한 칸 이동한 새 위치 (nx, ny)를 계산

            if (0 <= nx < n and 0 <= ny < m # 맵의 바깥이 아닌지
                    and maps[nx][ny] == 1   # 이동할 수 있는 길인지 벽인지 확인
                    and dist[nx][ny] == 0):
                dist[nx][ny] = dist[x][y] + 1 # 새 칸까지의 거리는 현재 칸까지의 거리보다 한 칸 더한 값
                queue.append((nx, ny)) # 새 칸을 큐에 기록

    return -1 # 상대 진영에 도달 할 수 없을 경우

print(solution(maps))
