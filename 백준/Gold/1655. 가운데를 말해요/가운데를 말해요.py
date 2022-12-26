import sys
import heapq

input = sys.stdin.readline
h_low = []
h_high = []

n = int(input())
arr = [
    int(input())
    for _ in range(n)
]

for i, e in enumerate(arr):
    # heapQ는 가장 작은 값이 0으로 옴. 중간값에서 가장큰걸 뽑아내려면 -1을 곱해야함
    if len(h_low) == len(h_high): heapq.heappush(h_low, e * -1)
    else: heapq.heappush(h_high, e)

    if len(h_low) >= 1 and len(h_high) >= 1 and h_low[0] * -1 > h_high[0]: # 가장 큰 값이 max에 안 있고 Low에 있을 때
        max_val_of_minheap = heapq.heappop(h_low) * -1
        min_val_of_maxheap = heapq.heappop(h_high)
        heapq.heappush(h_high, max_val_of_minheap)
        heapq.heappush(h_low, min_val_of_maxheap * -1)

    # print(h_low, h_high)
    print(h_low[0] * -1)
'''

for i, e in enumerate(arr):
    if i == 0:
        l.append(e)
    else:
        f = True
        for sub_idx, sub_e in enumerate(l):
            if sub_e > e:
                l.insert(sub_idx, e)
                f = False
                break
        if f: l.append(e)

    if i%2 == 1: print(l[(len(l)//2) - 1])
    else: print(l[len(l)//2])
    # print(d[-1])

'''
