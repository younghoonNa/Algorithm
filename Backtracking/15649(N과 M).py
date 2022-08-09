import sys
input = sys.stdin.readline

def backtracking(element):
    if element == m:
        print(* result)
        return

    for idx in range(1, n+1):
        if visited[idx] == 0:
            visited[idx] = 1
            result.append(idx)
            backtracking(element+1)
            visited[idx] = 0
            result.pop()

n, m = map(int, input().split())
visited = [0] * (n+1)
result = []
backtracking(0)