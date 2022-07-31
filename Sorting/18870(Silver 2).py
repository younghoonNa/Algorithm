n = int(input())
arr = list(map(int, input().split()))
line = sorted(list(set(arr)))

dic = {line[i] : i for i in range(len(line))}
# print(dic)
for i in arr:
    print(dic[i], end = ' ')

# for i in arr:
#     print(line.index(i), end = " ")




'''
5
2 4 -10 4 -9

6
1000 999 1000 999 1000 999

6
1 1 1 0 -9 -9
'''