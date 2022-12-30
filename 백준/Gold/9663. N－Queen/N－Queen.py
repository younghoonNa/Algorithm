import sys
input = sys.stdin.readline

n = int(input())
# arr = [[0 for _ in range(n)] for _ in range(n)]

# def print_arr(arr):
#     print("=============")
#     for r in range(n):
#         print(arr[r])
#
# def check(arr, row, col, queens):
#     global cnt
#     for idx in range(n):
#         arr[idx][col] = 1
#         arr[row][idx] = 1
#         if idx+row < n and idx+col < n: arr[idx + row][idx + col] = 1
#         if 0 <= row-idx < n and 0 <= idx+col < n: arr[row-idx][idx + col] = 1
#         if 0 <= row + idx < n and 0 <= col - idx < n: arr[row + idx][col - idx] = 1
#         if 0 <= row - idx < n and 0 <= col - idx < n: arr[row - idx][col - idx] = 1
#
#     # print_arr(arr)
#     sums = 0
#     for s in range(n): sums += sum(arr[s])
#
#     if queens == n: cnt+=1
#     elif sums != n * n:
#         cnt+=1
#         for r in range(row, n):
#             for c in range(n):
#                 if arr[r][c] == 0:
#                     row = r
#                     col = c
#                     cnt+=1
#                     check(arr, row, col, queens+1)


# 기존 풀이 -> 2차원 배열을 이용한 풀이. -> 시간초과
# 1차원 배열 사용하여 해결 가능함.
# - 1. Queen은 같은 줄에 2개가 올 수 없음.
# - 2. 대각선 여부는 i-th row Queen과 (i+a)-th row Queen은 1차원 상에서 alpha만큼 떨어져 있으면 안됨.
# arr = [0 for _ in range(n)]
cnt = 0
arr = [0] * n
def check_queen(x):
    for i in range(x):
        if arr[x] == arr[i] or abs(arr[x] - arr[i]) == abs(x - i):
            return False
    return True
def queen(x):
    global cnt
    if x == n:
        cnt += 1
        return
    else:
        for i in range(n): # 어짜피 같은 줄엔 하나의 Q밖에 안들어감. for문은 한개로 충분.
            arr[x] = i
            if check_queen(x):
                queen(x+1)


queen(0)
print(cnt)
