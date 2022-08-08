# 5의 나머지
def fiveCount(n):
    answer = 0
    while n != 0: n = n // 5; answer += n
    return answer

# 2의 나머지
def twoCount(n):
    answer = 0
    while n != 0: n = n // 2; answer += n
    return answer

n, m = map(int, input().split())

if m == 0: print(0)
# nCm
else: print(min(twoCount(n) - twoCount(m) - twoCount(n - m), fiveCount(n) - fiveCount(m) - fiveCount(n - m)))
