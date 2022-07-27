# 아리가 보스 몬스터를 잡으러 가려면 광야에 위치한 포탈을 타야만 한다. 하지만 광야에는 아리가 포탈을 타러 가는 것을 방해하려는 보스 몬스터의 오른팔인 부하 몬스터 한 마리도 함께 위치해 있다. 광야는 세로의 길이가 N, 가로의 길이가 M 인 N x M 격자판으로 이루어져 있고 격자판의 왼쪽 윗 칸은 (1, 1)이며 오른쪽 아래 칸은 (N, M)이다. 아리가 처음 위치한 칸은 (1, Ac)이고, 부하 몬스터가 위치한 칸은 (Sr, Sc)이며, 포탈은 (N, M)에 위치해있다. 부하 몬스터의 위치가 (N, M)인 경우는 존재하지 않는다.

# 부하 몬스터는 처음 위치한 칸에서 움직일 수 없어 아리가 포탈을 타려는 것을 직접적으로 막을 수는 없지만 간접적으로 막기 위해 아리의 움직임에 마법을 걸어두었다. 부하 몬스터가 아리에게 걸어둔 마법은 다음과 같다.

# 아리의 진행 방향은 왼쪽이나 오른쪽 두 방향 중 하나이다.
# 아리의 진행 방향이 왼쪽이었다면 반드시 행의 왼쪽 끝, 오른쪽이었다면 행의 오른쪽 끝까지 이동해야 한다. 한 행의 끝에 도달했다면 아리는 아래 행으로 한 칸 이동한다.
# 아리가 아래 행으로 이동하면 아리의 진행 방향은 윗 행에서의 진행 방향의 반대가 된다.
# 예를 들어, 광야의 세로 길이가 5, 가로 길이가 6이고 아리가 처음 위치한 칸이 (1, 3) 일 때, 진행 방향에 따른 아리의 이동 경로는 아래 그림과 같다.

n, m = map(int, input().split())
column, dir = map(int, input().split())
mon_x, mon_y = map(int, input().split())

arr = [
    [0] * m
    for _ in range(n)
]
# 시작 좌표는 (0, columns-1)
arr[0][column-1] = 1
arr[n-1][m-1] = 1

# dir == 0 -> left
# dir == 1 -> right
row = 0
b = False
while True:
    if row ==0:
        start = column - 1

        if dir: # dir == 1
            stop = m
        else:
            stop = -1

    else:
        if dir:
            start = 0
            stop = m

        else:
            start = m - 1
            stop = -1


    if start > stop:
        step = -1
    else: step = 1

    for idx in range(start, stop, step):

        if row == n-1 and idx == m-1:
            b = True
            break

        arr[row][idx] = 1

    # print(arr)
    if b: break

    if dir: dir -= 1
    else: dir += 1

    row += 1

# print(arr)

if arr[mon_x-1][mon_y-1] == 0:
    print("YES!")
else:
    print("NO...")
