import sys
input = sys.stdin.readline

n, k = map(int, input().split())

table = [[0 for _ in range(k+1)] for _ in range(n+1)]

arr = [
    list(map(int, input().split()))
    for _ in range(n)
]

for i in range(1, n+1):
    w, v = arr[i-1]
    for weight in range(1, k+1):
        if weight >= w: # 버틸 수 있는 무게보다 작으며 물품 무게보다 클 때
            table[i][weight] = max(table[i - 1][weight-w] + v, table[i - 1][weight])
        else:
            table[i][weight] = table[i-1][weight]

print(max(table[-1]))
