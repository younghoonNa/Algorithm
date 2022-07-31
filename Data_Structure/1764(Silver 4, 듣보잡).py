import sys
input = sys.stdin.readline

n, m = map(int, input().split())

arr_a = set()
arr_b = set()

for _ in range(n): arr_a.add(input().rstrip())
for _ in range(m): arr_b.add(input().rstrip())

print(arr_a.intersection(arr_b).__len__())
for e in sorted(arr_a & arr_b):
    print(e)


# print(arr_a, arr_b, arr_a.intersection(arr_b))