################################################## Version 1
n = int(input())

array = [
    list(map(int, input().split()))
    for _ in range(n)
]

for idx in range(0, n):
    cnt = 1
    for compare in range(0, n):

        if idx == compare:
            continue


        if array[idx][0] > array[compare][0] and array[idx][1] > array[compare][1]:
            continue

        elif array[idx][0] >= array[compare][0] or array[idx][1] >= array[compare][1]:
            continue

        else:
            cnt+=1

    print(cnt, end = " ")



################################################## Version 2 시간 초과
#
# ordered_list = []
# not_orederd = []
#
# cnt = 1
# result = []
#
# while arr.__len__() != 0:
#     s = arr[0]
#     higher = True
#     contin = False
#     # print(arr, cnt)
#     for idx2 in range(1, arr.__len__()):
#         if s[1] > arr[idx2][1]:
#             if contin:
#                 for i in range(0, idx2):
#                     # print(arr, i, idx2)
#                     result.append([arr[0],cnt])
#                     arr.pop(0)
#                 higher = False
#                 cnt += idx2
#                 # print(arr, cnt)
#                 break
#
#
#         else:
#             higher = False
#             contin = True
#
#
#     if higher:
#         result.append([arr[0], cnt])
#         arr.pop(0)
#         cnt+=1
#
#
#
# for a in array:
#     for e in result:
#         if e[0] == a:
#             print(e[1], end = " ")
# # print(result)
