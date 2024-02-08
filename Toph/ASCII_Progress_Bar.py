import math

num = float(input())


progress = math.floor(num)
progress_count = ((progress - (progress % 10)) / 10)
count2 = (100 - (progress - (progress % 10))) / 10
print(f"[{'+' * int(progress_count)}{'.' * int(count2)}] {int(progress)}%")
