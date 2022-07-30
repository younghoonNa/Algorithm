import sys
row, col = map(int, input().split())

arr = [
    list(input().split())
    for _ in range(row)
]

def check_w_first(row, col, arr, check):

    if check == "B": div = 0
    else: div = 1

    cnt = 0

    for rows in range(row[0], row[1]):
        for cols in range(col[0], col[1]):
            if (rows + cols)%2 == div:
                if arr[rows][0][cols] == "B":  cnt+=1
            else:
                if arr[rows][0][cols] == "W": cnt+=1

    return cnt


lower = sys.maxsize
for r in range(0, row):
    for c in range(0, col):

        W = check_w_first([r, r+8], [c, c+8], arr, "W")
        B = check_w_first([r, r + 8], [c, c + 8], arr, "B")
        lower = min(W,B, lower)

        if c+8 >= col: break
    if r+8 >= row: break

print(lower)


# print(min(check_w_first(row, col, arr, "W"), check_w_first(row, col, arr, "B")))
#
# print((check_w_first(row, col, arr, "W")))
# print((check_w_first(row, col, arr, "B")))

'''
8 8
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBBBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW


10 13
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
WWWWWWWWWWBWB
WWWWWWWWWWBWB
'''
