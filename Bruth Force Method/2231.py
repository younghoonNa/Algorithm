n = int(input())

result = False
for idx in range(1, n):

    int_list_sum = sum(list(map(int ,list(str(idx)))))

    if int_list_sum + int(idx) == n:
        result = True
        print(idx)
        break


if not result:
    print(0)