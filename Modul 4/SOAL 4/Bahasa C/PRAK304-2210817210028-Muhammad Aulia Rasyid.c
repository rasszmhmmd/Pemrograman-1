#include <stdio.h>
int main()
{
    int n, i;
    i = 0;
    while (i < 5){
    scanf("%d", &n);
    if (n >= 1 && n <=9){printf("Satuan");}
    else if (n == 0){printf("Nol");}
    else if (n >= 11 && n <= 19){printf("Belasan");}
    else if (n >= 20 && n <= 99){printf("Puluhan");}
    else {printf("Anda Menginput Melebihi Limit Bilangan");}
    i++;}
    return 0;
}