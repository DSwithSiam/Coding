b, c=input().split()
num = int(b) % int(c) 
num2 = int(b) - int(num)
num3 = int(num2) / int(c)
print(int(num3), num, c)