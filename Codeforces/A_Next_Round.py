n, k = map(int, input().split())

num_list = list(map(int, input().split()))
count = 0
s =  num_list[k-1]
for i in num_list:
    if i >= s and i != 0:
        count += 1

print(count)