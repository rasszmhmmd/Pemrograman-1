import math
a, b = input().split()
a = int(a)
b = int(b)
c = math.sqrt(pow(b,2) - pow(a,2))
k = a + b + c
l = 0.5 * c * a
print("Alas = %i cm" %c)
print("Tinggi = %i cm"  %a)
print("Keliling = %i cm" %k)
print("Luas = %i cm^2\n" %l)
a1 = input()
b1 = input()
a1 = int(a1)
b1 = int(b1)
c1 = math.sqrt(pow(b1,2) - pow(a1,2))
k1 = a1 + b1 + c1
l1 = 0.5 * c1 * a1
print("Alas = %i cm" %c1)
print("Tinggi = %i cm"  %a1)
print("Keliling = %i cm" %k1)
print("Luas = %i cm^2\n" %l1)