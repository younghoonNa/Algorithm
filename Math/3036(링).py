import sys
import math
input = sys.stdin.readline

n = int(input())
li = list(map(int, input().split()))

first = li[0]
li.remove(first)

for idx in range(li.__len__()):
    g = math.gcd(first, li[idx])
    print(f"{first//g}/{li[idx]//g}")
