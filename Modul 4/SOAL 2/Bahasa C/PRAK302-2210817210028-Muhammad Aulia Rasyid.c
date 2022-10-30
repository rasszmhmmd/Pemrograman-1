#include <stdio.h>
int main()
{
    int n, i;
    i = 0;
    while (i < 5){
    scanf("%d", &n);
    if (n >= 80){printf("A");}
    else if (n >= 70 && n <= 79){printf("B");}
    else if (n >= 60 && n <= 69){printf("C");}
    else if (n >= 50 && n <= 59){printf("D");}
    else {printf("E");}
    i++;}
    return 0;
}