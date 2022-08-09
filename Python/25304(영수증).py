import sys
input = sys.stdin.readline

total = int(input())
n = int(input())
sums = 0

for _ in range(n):
    won,  nums = map(int, input().split())
    sums += won*nums

if sums == total:
    print("Yes")
else: print("No")