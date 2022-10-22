#include <stdio.h>
int main()
{
 int a, b, c, k, l, a1, b1, c1, k1, l1;
 scanf("%i %i", &a , &b);
 c = sqrt(pow(b,2) - pow(a,2));
 k = a + b + c;
 l = 0.5 * c * a;
 printf("Alas = %i cm\n", c);
 printf("Tinggi = %i cm\n", a);
 printf("Keliling = %i cm\n", k);
 printf("Luas = %i cm^2\n\n", l);
 scanf("%i", &a1);
 scanf("%i", &b1);
 c1 = sqrt(pow(b1,2) - pow(a1,2));
 k1 = a1 + b1 + c1;
 l1 = 0.5 * c1 * a1;
 printf("Alas = %i cm\n", c1);
 printf("Tinggi = %i cm\n", a1);
 printf("Keliling = %i cm\n", k1);
 printf("Luas = %i cm^2\n\n", l1);
 return 0;
}
