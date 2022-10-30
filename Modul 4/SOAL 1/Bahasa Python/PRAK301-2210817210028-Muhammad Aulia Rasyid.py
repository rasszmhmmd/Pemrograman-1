i = 0
while i < 3 :
    x, y = input().split()
    x = int(x)
    y = int(y)
    if x <= y:
        print("%d %d"%(x,y))
    else :
        print("%d %d"%(y,x))
    i+=1