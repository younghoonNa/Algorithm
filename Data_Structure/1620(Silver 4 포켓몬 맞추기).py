import sys
input = sys.stdin.readline
n, m = map(int, input().split())

result = dict()
list_result = []
for idx in range(n):
    tmp = input().rstrip()
    result[tmp] = idx
    list_result.append(tmp)

for _ in range(m):
    tmp = input().rstrip()

    if tmp in result:
        print(result[tmp] + 1)
        # print(tmp)

    else:
        tmp = int(tmp)
        print(list_result[tmp-1])