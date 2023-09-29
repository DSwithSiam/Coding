t = int(input())
l = [int(i) for i in input().split()]

c = 0
while True:
    count = 0
    for i in l:
        if(i % 2 == 0):
            count += 1
            l[l.index(i)] = i / 2
    if(count == len(l)):
        c += 1
    else:
        break
print(c)