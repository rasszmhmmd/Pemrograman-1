#include <stdio.h>
int main()
{
    int s1 , s2 , s3 , htm , k , tb;
    s1 = 4;
    s2 = 5;
    s3 = 7;
    k = s1 + s2 + s3;
    htm = 85000;
    tb = k * htm;
    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", s1 , s2 , s3);
    printf("Keliling Tanah Pak Dangklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", htm);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dangklek adalah : Rp %d", tb);
    return 0;
}
