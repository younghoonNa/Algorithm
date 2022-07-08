'''
양의 정수를 원소로 갖는 길이가 N인 수열이 입력으로 주어졌을 때, 
이 수열을 오름차순으로 정렬 했을 때 각각의 위치에 있던 원소가 어느 위치로 이동하는지 출력하는 코드를 작성해보세요.

입력 형식
첫째 줄에는 수열의 길이를 나타내는 양의 정수 N이 주어지고, 둘째 줄에는 N개의 양의 정수인 원소가 빈칸을 사이에 두고 주어집니다. 
숫자가 중복되어 주어질 수 있습니다.

출력 형식
이 수열을 정렬했을 때 각각의 위치에 있던 원소가 어느 위치로 이동하는지를 공백을 사이에 두고 출력하는 코드를 작성해보세요. 
동일한 원소의 경우, 먼저 입력으로 주어진 원소가 더 앞으로 와야 합니다.
'''

class sort:
    def __init__(self, original, sort_idx):
        self.original = original
        self.sort_idx = sort_idx

n = int(input())
li = list(map(int, input().split()))

result, origin = [], []
for idx, element in enumerate(li, start = 1):
    result.append(sort(element, idx))
    origin.append(sort(element, idx))

result.sort(key = lambda x: (x.original))

# for ori_element in origin:
#     print(ori_element.original, end=  " ")

# print()
# for ori_element in result:
#     print(ori_element.original, end=  " ")

for ori_element in origin:
    cnt = 0
    for element in result:
        if ori_element.original == element.original and ori_element.sort_idx == element.sort_idx:
            print(f"{cnt+1}", end=  " ")
            break
        
        cnt+=1
# for element, ori_element in zip(result, origin):

#     if element.o == ori_element

    
