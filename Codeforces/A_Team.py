n = int(input())

list = []
count = 0
for i in range(0, n):
    a =input().split()
    list.append(a)

for i in list:
    tmp = 0
    for j in i:
        tmp += int(j)
    if tmp >= 2:
        count += 1
print(count)