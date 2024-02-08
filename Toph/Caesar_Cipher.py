n = int(input())
text = input()
ans = ""

for i in text:
    if (i == " "):
        ans += " "
        continue
    if i.isalpha():
        
        if i.islower():
            base = ord('a')
        else:
            base = ord('A')
        
        shifted = (ord(i) - base - n) % 26 + base
        ans += chr(shifted)
        
    else:
        ans += i
print(ans)
