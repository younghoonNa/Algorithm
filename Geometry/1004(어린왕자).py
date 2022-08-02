import sys
input = sys.stdin.readline

def circle(x, y, z, w, r):
    c = (x-y)**2 + (z-w)**2
    # print(c, r ** 2)
    if c<(r**2): return True
    else: return False


t = int(input())
for _ in range(t):
    x1, y1, x2, y2 = map(int, input().split())
    case = int(input().rstrip())
    cnt = 0
    for _ in range(case):
        center_x, center_y, radius = map(int, input().split())
        # print(center_x, center_y, radius, x1,y1, x2,y2)

        cir_a = circle(center_x, x1, center_y, y1, radius)
        cir_b = circle(center_x, x2, center_y, y2, radius)
        if cir_a ^ cir_b :
            cnt+=1

    print(cnt)



