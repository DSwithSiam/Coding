c = int(input())
input_string = input()
list  = input_string.split()


bigNumber = 0
for i in (list):
  for j in (list):
    if int(i) < int(j) and int(bigNumber) < int(j):
      bigNumber = j
print(bigNumber)