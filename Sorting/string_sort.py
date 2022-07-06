```
str을 sorted() 하게 되면 [ 'A', 'B', .. ] 와 같은 형식으로 반환함.
따라서 하나의 문자열로 합치는 과정이 필요하겓 되는데 이 때 join을 이용함.
"".join(list) 를 통한 문자열 합치기
``` 

string = input()
print(* sorted(string), sep = "")

# 각 문자를 원소로 담는 리스트 만들기
# 예 : ['b', 'a', 'n', 'a', 'n', 'a']
sorted_list = sorted(s)

# 각 문자를 원소로 갖는 리스트를 하나의 문자열로 합치기
# 예 : 'banana'
sorted_str = ''.join(sorted_list)

# 출력
print(sorted_str)
