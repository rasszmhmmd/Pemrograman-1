#include <stdio.h>
int main()
{
    int a, i;
    char b[10];
    scanf("%d %s", &a, &b);
    for (i = 1; i<51; i++){
        if (i % a == 0){
            printf("%s ", b);}
        else{
            printf("%d ", i);}
    }
}
