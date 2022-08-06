import math
import sys
from math import gcd, lcm

# 1. 이 문제의 접근 방법.
# input[0] = mod * int[0] + R
# input[1] = mod * int[1] + R
# input[2] = mod * int[2] + R
# ...
# input[x] = mod * int[x] + R

# 이 때 input[1] - input[0] = mod * (int[1] - int[0])
# 이 작업을 통해 뒤에 남은 나머지를 없앰.
# 위의 수식을 통해 input[x] - input[x-1] 는 (int[1] - int[0])의 배수 인 것을 알 수 있음.


input = sys.stdin.readline

n = int(input())
arr = [
    int(input())
    for _ in range(n)
]

arr = sorted(arr)
compare = set()

for idx in range(1, arr.__len__()):
    s = set()
    g = arr[idx] - arr[idx-1]

    for num in range(2, int(math.sqrt(g)+1)):
        if g%num == 0: s.add(num); s.add(g//num)
    s.add(g)

    if idx == 1: compare = s.copy() ;continue
    else: compare = compare.intersection(s)

print(* sorted(list(compare)))



