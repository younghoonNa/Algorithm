from collections import deque #회전큐로 구현

N = int(input())
student = list(map(int, input().split())) 
result = deque()

for std, move in enumerate(student):
    result.rotate(move) #오른쪽으로 돌림
    result.append(std + 1) #사람 추가
    result.rotate(-move) #왼쪽으로 원상복구

print(*result)