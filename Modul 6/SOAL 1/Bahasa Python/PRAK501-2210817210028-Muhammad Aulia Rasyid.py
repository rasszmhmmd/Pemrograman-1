def MaxBilangan (o, p, q, r) :
    if o > p and o > q and o > r :
        return o
    elif p > o and p > q and p > r :
        return p
    elif q > o and q > p and q > r :
        return q
    else :
        return r
a, b, c, d = input().split()
hasil = MaxBilangan(int(a), int(b), int(c), int(d))
print(hasil)