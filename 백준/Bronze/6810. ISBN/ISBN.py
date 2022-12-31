# import sys
# input = sys.stdin.read

one = input()
two = input()
three= input()

string = "9780921418"
string += one + two + three

sums = 0
for i, s in enumerate(string):
    if i%2 == 0: sums += int(s)
    else: sums += int(s)*3


print(f"The 1-3-sum is {sums}")


