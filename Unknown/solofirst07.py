#Problem01
# a = int(input())
# b = int(input())

# if a<b:
#     print("Runner up")
# else:
#     print("Champion")

# if b<a:
#     print("Runner up")
# else:
#     print("Champion")



#Problem02
# year = int(input())
# if 1582 < year:
#     if (year%4 == 0 and year%100 != 0) or (year%400 == 0) : 
#         print("I can participate in LCPC") 
#     else : 
#         print("I have to travel back to the past")
# else:
#     if year%4 == 0 : 
#         print("I can participate in LCPC") 
#     else : 
#         print("I have to travel back to the past")



#Problem03
# a, b = map(int, input().split())
# count = 0
# for i in range(a):
#     temp = list(map(int, input().split()))
#     for j in temp:
#         if j == 0:
#             count = count + 1
# print(count)



#Problem04

a = int(input())
count = 0
for i in range(a):
    count += 1
    sum = float(0.0000)
    c = 0
    x = int(input())
    for j in range(x):
        b = float(input())
        sum = sum + b
    c = sum / x
    c = "%.3f" % c
    print(f"Case {count}: {c}")



#Problem05



#Problem06



#Problem07
#Problem08
#Problem09
#Problem10