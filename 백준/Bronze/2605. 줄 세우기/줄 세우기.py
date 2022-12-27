import sys
input = sys.stdin.readline
n = int(input())
arr = list(map(int, input().split()))

result = []
for i in range(0, n):
    w = i - arr[i]# 삽입 위치
    result = result[:w] + [i+1] + result[w:]



print(result)
'''
5
0 1 1 3 2
'''
