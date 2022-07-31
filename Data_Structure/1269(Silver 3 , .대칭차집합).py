import sys
input = sys.stdin.readline

string_list = input()
len_a = string_list.__len__()
set_a = set()

for idx1 in range(len_a):
    for idx2 in range(idx1+1, len_a):
        set_a.add(string_list[idx1:idx2])

print(set_a.__len__())


