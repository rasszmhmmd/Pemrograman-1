i = 0
while i < 5 :
    det = int(input())
    d = (det % 60)
    m = (det % 3600) / 60
    j = (det % 86400) / 3600
    h = (det % (86400 * 30)) / 86400
    if (det <= 86400) :print("%02d:%02d:%02d"%(j,m,d))
    else :print("%d hari %02d:%02d:%02d\n"%(h,j,m,d))
    i+=1