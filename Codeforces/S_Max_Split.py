s = input()
ans = []
l = 0
r = 0
sub = ""
for i in s:
    
    if(i == 'R'):
        r += 1
    elif(i == "L"):
        l += 1
    
    sub += i
    if(l == r):
        ans.append(sub)
        sub = ""
        l = 0
        r = 0
        
print(len(ans))
for i in ans:
    print(i)