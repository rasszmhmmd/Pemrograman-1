#include <stdio.h>
int main()
{
    int n, i;
    i = 0;
    while (i < 3){
    scanf("%d", &n);
    if (n > 0){printf("positif");}
    else if (n < 0){printf("negatif");}
    else{printf("nol");}
    i++;}
    return 0;
}