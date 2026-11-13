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
visited = []



# 1. 시작 노드인 1부터 탐색
# 2. 현재 방문한 노드를 visited_array에 추가
# 3. 현재 방문한 노드와 인접한 노드 중 방문하지 않은 노드 방문

# 재귀함수를 사용해서 그래프 표현하기 => 계속 recursion 함수를 부르면서 깊이가 깊어질 수록 recursionError가 발생할 수 있음
#   => 가장 마지막에 넣은 노드를 찾으면 되므로 stack을 통해 구현할 수도 있음 -> 그래프의 오른쪽 가지부터 타고 갔다오는 방향임
def dfs_recursion(adjacent_graph, cur_node, visited_array):
    visited_array.append(cur_node)
    print(adjacent_graph[cur_node]) # 현재 노드와 인접한 노드 출력

    # 인접한 그래프의 값을 하나씩 꺼내서
    for adjacent_node in adjacent_graph[cur_node]:
        # 방문하지 않았다면
        if adjacent_node not in visited_array:
            dfs_recursion(adjacent_graph, adjacent_node, visited_array) # 인접 노드에 대해 똑같이 방문
    return


dfs_recursion(graph, 1, visited)  # 1 이 시작노드입니다!
print(visited)  # [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 이 출력되어야 합니다!