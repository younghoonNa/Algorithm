import sys
input = sys.stdin.readline

oriental_melon = int(input())
max_row, max_row_idx = 0,0
max_col, max_col_idx = 0,0
squard = []

for idx in range(6):
    side, length = map(int, input().split())

    if side == 1 or side == 2:
        if length > max_col:
            max_col = length
            max_col_idx = idx

    else:
        if length > max_row:
            max_row = length
            max_row_idx = idx

    squard.append([side, length])

if max_row_idx == 0: row1, row2 = 5, 1
elif max_row_idx == 5: row1, row2 = 4, 0
else: row1, row2 = max_row_idx - 1, max_row_idx + 1

if max_col_idx == 0: col1, col2 = 5, 1
elif max_col_idx == 5: col1, col2 = 4, 0
else: col1, col2 = max_col_idx - 1, max_col_idx + 1

for idx in range(6):
    side = squard[idx][0]
    if (side == 1 or side == 2) and (idx != row1 and idx != row2):
        min_col = squard[idx][1]
    elif (side == 3 or side == 4) and (idx != col1 and idx != col2):
        min_row = squard[idx][1]

mini_area = (min_row *  min_col)
max_area = (max_row *  max_col)
# print(min_row, min_col)
# print(max_row, max_col)
area = max_area - mini_area
print(area * oriental_melon)


'''
7
4 50
2 160
3 30
1 60
3 20
1 100

1
3 60
1 20
4 160
2 50
3 100
1 30
'''
