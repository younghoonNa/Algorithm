import sys
input = sys.stdin.readline
repeat = int(input())

for r in range(repeat):
    case = int(input())
    clothes = set()
    count = dict()

    for c in range(case):
        name, clo = input().split()


        tmp = clothes.copy()
        clothes.add(clo)

        if clothes != tmp:
            count[clo] = 1
        else:
            count[clo] += 1

    s = 1
    for idx in count.keys():
        s *= count[idx]+1

    print(s-1)
