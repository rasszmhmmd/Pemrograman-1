#include <stdio.h>
int main()
{
    float k5 , jt , r , d , phi , k1;
    k5 = 5;
    jt = 14;
    k1 = jt / k5;
    phi = 3.14;
    r = k1 / (2 * phi);
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", k5);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jt);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", r);
    return 0;
}
