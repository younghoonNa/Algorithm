import sys
input = sys.stdin.readline

n,m = map(int, input().split())
visitied = [0] * (n+1)
result = []

def backTracking(element):

    if element == m:
        print(* result)
        return 0

    for i in range(1, n+1):
        if visitied[i] == 0:

            if result.__len__() >= 1:
                if result[-1] < i:
                    visitied[i] = 1
                    result.append(i)
                    backTracking(element + 1)
                    visitied[i] = 0
                    result.pop()

            else:
                visitied[i] = 1
                result.append(i)
                backTracking(element + 1)
                visitied[i] = 0
                result.pop()




backTracking(0)