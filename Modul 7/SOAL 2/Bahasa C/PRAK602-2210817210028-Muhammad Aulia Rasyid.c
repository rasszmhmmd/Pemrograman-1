#include <stdio.h>
int main (void)
{
    int ruang, zetsu, a;
    scanf ("%d", &ruang) ;
    int angka[ruang] ;
    for (a = 0; a < ruang; a++) {
        scanf ("%d", &zetsu);
        angka[a] = zetsu ;
    }
    printf("\n");
    for (a = 0; a < ruang; a++) {
        printf ("%d ", angka[a] * (a + 1)) ;
    }
}