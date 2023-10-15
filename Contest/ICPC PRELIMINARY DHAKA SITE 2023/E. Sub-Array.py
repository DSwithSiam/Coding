
def subSet(ar):
    n = len(ar)
    c = 0
    l = 1
    
    for i in range(1, n):
        if (ar[i] == ar[i-1]):
            l += 1
        else:
            c += (l * (l+1)) // 2
            l = 1
            
    c +=  (l * (l+1)) // 2
    return (n *(n+1)) // 2 - c

t = int(input())

for i in range(1, t+1):
    e = int(input())
    m = list(map(int, input().split()))
    print(f"Case {i}: {subSet(m)}")