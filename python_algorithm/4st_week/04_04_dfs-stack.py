# 위의 그래프를 예시로 삼아서 인접 리스트 방식으로 표현했습니다!
graph = {
    1: [2, 5, 9],
    2: [1, 3],
    3: [2, 4],
    4: [3],
    5: [1, 6, 8],
    6: [5, 7],
    7: [6],
    8: [5],
    9: [1, 10],
    10: [9]
}

# Stack을 이용해 구현한 코드

# 1. 시작 노드를 스택에 넣음
# 2. 현재 스택의 노드를 빼서 visited에 추가
# 3. 현재 방문한 노드와 인접한 노드 중 방문하지 않은 노드를 스택에 추가
#   위의 과정을 스택이 빌 때까지 반복

def dfs_stack(adjacent_graph, start_node):
    stack = [start_node] # 현재 시작 노드
    visited = [] # 방문한 노드 저장을 위한 배열

    while stack: # 스택이 비지 않았을 때까지
        current_node = stack.pop() # 현재 방문한 노드를 스택에서 빼 현재 노드 값에 저장
        visited.append(current_node) # 방문한 노드 값을 방문 배열에 저장


        # 인접한 노드의 정보를 반복해서 꺼냄
        for adjactent_node in adjacent_graph[current_node]:
            # 인접한 노드들이 현재 방문 배열에 존재하지 않는다면 
            if adjactent_node not in visited: 
                stack.append(adjactent_node) # 스택에 해당 인접 노드 저장
                
    return visited


print(dfs_stack(graph, 1))  # 1 이 시작노드입니다!
# [1, 9, 10, 5, 8, 6, 7, 2, 3, 4] 이 출력되어야 합니다!