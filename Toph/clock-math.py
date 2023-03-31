h, m = map(int, input().split())

if (12<h or h<0 or m>60 or m<0):
  print("Input is worng")

if h==12:
  h=0
if m==0:
  m=0
houreAngle = 0.5 *(h * 60+m)
minuteAngle = 6*m

angle = (houreAngle - minuteAngle)

angle = min(360-angle, angle)
print(angle)