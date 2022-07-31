class User:
    def __init__(self, age, name):
        self.age = age
        self.name = name

n = int(input())
users = []

for _ in range(n):
    age, name = input().split()
    age = int(age)
    users.append(User(age, name))

users.sort(key = lambda x : (x.age))

for e in users:
    print(e.age, e.name)