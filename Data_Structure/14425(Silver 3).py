import sys
input = sys.stdin.readline

n, m = map(int, input().split())

string = set()
for _ in range(n):
    string.add(input())


# print(string)

# result = 0
for _ in range(m):
    tmp = input()

    if tmp in string:
        print(tmp in string, tmp, string)
        # result += 1
#
# print(result)

'''
5 11
baekjoononlinejudge
startlink
codeplus
sundaycoding
codingsh
baekjoon
codeplus
codeminus
startlink
starlink
sundaycoding
codingsh
codinghs
sondaycoding
startrink
icerink
'''