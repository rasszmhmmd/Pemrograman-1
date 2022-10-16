#include <stdio.h>
int main()
{
    float A , B , diskonA , diskonB , hargaA , hargaB;
    char modulus = '%';
    A = 400000;
    B = 350000;
    diskonA = A * 13 / 100;
    hargaA = A - diskonA;
    diskonB = B * 21 / 100;
    hargaB = B - diskonB;
    printf("Harga sepatu A adalah %.f\n", A);
    printf("Harga sepatu B adalah %.f\n", B);
    printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.f\n", modulus , hargaA);
    printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.f\n", modulus , hargaB);
    return 0;
}
