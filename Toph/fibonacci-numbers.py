n= int(input())
a = 1
b = 1
c = 0
for i in range(n-2):
	c = a + b
	a = b
	b = c
print(c)