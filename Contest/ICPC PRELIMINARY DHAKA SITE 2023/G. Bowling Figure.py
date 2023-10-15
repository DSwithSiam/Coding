t = int(input())

while t:
    t -= 1
    m = input()
    ov = 0
    run = 0
    wic = 0
    for i in m:
        ov += 1
        
        if(i == "W"):
            wic += 1
        else:
            run += int(i)
    o = ov // 6
    bol = ov % 6
    x1 = "Over"
    x2 = "Run"
    x3 = "Wicket"
    
    if ov > 6:
        x1 = "Overs"
    if run > 1:
        x2 = "Runs"
    if wic > 1:
        x3 = "Wickets"
    
    
    print(f"{o}.{bol} {x1} {run} {x2} {wic} {x3}.")