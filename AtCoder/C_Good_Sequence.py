n = int(input())
l = [int(i) for i in input().split()]

m = {}
c = 0

for i in l:
    if i in m:
        m[i] += 1
    else:
        m[i] = 1
        
for i in m:
    if i - m[i] != 0:
        if i > m[i]:
            c += m[i]
        else:
            c += m[i] - i
print(c)