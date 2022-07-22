n, m = map(int, input().split())
lists = list(map(int, input().split()))
cnt = 0
def dfs(idx, lists, element):
     global cnt, li
     if element == m:
          cnt += 1

     for sub_idx in range(idx + 1, n):
          # li.append(lists[sub_idx])
          dfs(sub_idx, lists, element +  lists[sub_idx])
          # print(sub_idx, lists, element + lists[sub_idx], li)
          # li.remove(lists[sub_idx])


for idx in range(n):
     # li = []
     # li.append(lists[idx])
     dfs(idx, lists, lists[idx])
     # print(idx, lists, lists[idx], li)

print(cnt)
