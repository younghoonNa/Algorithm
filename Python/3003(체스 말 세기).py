import sys
input = sys.stdin.readline

check = list(map(int, input().split()))
result = [1, 1, 2, 2, 2, 8]
output = []

for idx in range(check.__len__()):
    output.append(result[idx] - check[idx])

print(*output)
