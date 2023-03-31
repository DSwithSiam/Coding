number = int(input())

num = number / 2
num = int(num)
for i in range (2, num):
  if (number%i) == 0:
    print("No")
    break
else:
  print("Yes")