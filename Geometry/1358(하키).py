import sys
input = sys.stdin.readline

w, h, x, y, p = map(int, input().split())
cnt = 0

def squared(x1, y1):
    global x, y, w, h
    if (x1 >= x and x1 <= x+w) and (y1 >= y and y1 <= y+h): return True
    else: return False

def circle(x1, y1):
    global x, y, w, h

    if x1 <= x:
        center_x, center_y, radius = x, y + (h // 2), h // 2
        area = (center_x-x1)**2 + (center_y - y1)**2
        if area <= radius**2: return True
        else: return False
    elif x1 >= x:
        center_x, center_y, radius = x+w, y + (h // 2), h // 2
        area = (center_x-x1)**2 + (center_y - y1)**2
        if area <= radius**2: return True
        else: return False




for _ in range(p):
    x1, y1 = map(int, input().split())

    sq = squared(x1, y1)
    c = circle(x1, y1)

    if sq or c: cnt+=1

print(cnt)