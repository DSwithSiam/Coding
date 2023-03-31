a = int(input())
n = 1

for i in range (1, a, 1):
  b =(a - i)
  n = n * b

m = n * a

if 0<m and m<10:
  print(m)
if 9<m and m<100:
  print(int(repr(m)[-2:]))
if 99<m and m<1000:
  print(int(repr(m)[-3:]))
if 999< m:
  print(int(repr(m)[-4:]))