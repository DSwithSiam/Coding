t = int(input())


for _ in range(t):
    n = int(input())
    s = input().strip()

    first_black = s.find('B')
    last_black = s.rfind('B')
    
    if first_black == -1:
        print(0)
    else:
        length_segment = last_black - first_black + 1
        print(length_segment)
