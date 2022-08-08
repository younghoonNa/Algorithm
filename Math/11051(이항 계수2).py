import sys
input = sys.stdin.readline


# 이항 계수 N, K 가 주어졌을 때, 이항계수의 공식은
# N * N-1 * N-2  .. 가 k개, / k, k-1, ... 1 으로 분모 분자 모두 K개 이다.
# nCk?

n, k = map(int, input().split())
sup, sub = 1, 1
for _ in range(k): sup *= n; n-=1
for element in range(k, 0, -1): sub *= element
print((sup//sub)%10007)