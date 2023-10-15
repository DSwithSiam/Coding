t = int(input())

for cc in range(1, t+1):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    c = []
    for i in l:
        if(k != 1 and i % k == 0):
            if c not in l:
                c.append(i)
    print(f"Case {cc}: {len(c)}")
