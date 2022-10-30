i = 0
while i < 5:
    n = int(input())
    if (n == 0) :print("Nol")
    elif (1 <= n <= 9) : print("Satuan")
    elif (11 <= n <= 19) : print("Belasan")
    elif (20 <= n <= 99) : print("Puluhan")
    else : print("Anda Menginput Melebihi Limit Bilangan")
    i+=1