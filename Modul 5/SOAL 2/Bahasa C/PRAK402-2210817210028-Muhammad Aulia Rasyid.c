#include <stdio.h>
int main (){
    int angka, i ;
    scanf("%d", &angka);
    for (i = 0; i <= angka; i++){
        if (i % 2 == 1){
            printf("%d ", i); }}
    printf("\n");
    for (i = angka; i > 0; i--){
        if (i % 2 == 0){
            printf("%d ", i); }}
}
