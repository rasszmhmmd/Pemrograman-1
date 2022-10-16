#include <stdio.h>
int main()
{
    float A , B , C , k , l;
    A = 12;
    C = 5;
    B = sqrt((pow(C,2)) + (pow(A,2)));
    printf("Diketahui:\n");
    printf("Alas = %.f cm\n", C);
    printf("Tinggi = %.f cm\n\n", A);
    printf("Jawab:\n");
    printf("Sisi A = %.f cm\n", A);
    printf("Sisi B = %.f cm\n", B);
    printf("Sisi C = %.f cm\n", C);
    k = A + B + C;
    printf("Keliling = %.f cm\n", k);
    l = 0.5 * C * A;
    printf("Luas = %.f", l);
    return 0;
}
