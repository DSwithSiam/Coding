x = int(input())

w = input()

s = int (input())
e = input()
n = set()
a = set(map(int, w.split(' ')))
b = set(map(int, e.split(' ')))
a = a.union(b)
sum = (x+s)-( len(a))
print(sum)
