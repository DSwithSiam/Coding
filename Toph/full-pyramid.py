a = int(input())
c = 0
for i in range(1,a+1):
  c = c + 1
  for k in range(a - c):
    print(" ", end= "")
  for j in range(i):
    if j < i-1:
      print("*", end =" ")
    else:
      print("*", end="")
  print()