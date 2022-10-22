#include <stdio.h>
int main()
{
    float a, b, i, j, x, y, hasil, a1, b1, i1, j1, x1, y1, hasil1;
    scanf("%f %f %f %f %f %f", &a , &b , &i , &j , &x , &y);
    hasil = (a - b) * (i / j) - (x + y);
    printf("%.3lf\n\n", hasil);
    scanf("%f %f", &a , &b);
    scanf("%f %f", &i , &j);
    scanf("%f %f", &x , &y);
    hasil1 = (a - b) * (i / j) - (x + y);
    printf("%.3lf\n", hasil1);
    return 0;
}
