a, b, d = map(int, input().split())
input_string = input()
a = input_string.split()
c = 0
for i in range (b, d+1, 1):
  c = c + int(a[i])
print(c)