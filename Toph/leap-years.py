year = int(input())
if (year % 4 == 0) and (year % 400 != 0):
    print("Yes")
else:
	print("No")