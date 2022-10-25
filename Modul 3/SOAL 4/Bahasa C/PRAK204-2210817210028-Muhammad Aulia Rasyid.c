#include <stdio.h>
int main()
{
    float r, t, r1, t1, v, v1, l, l1, k, k1, phi;
    phi = 22/7.f;
    scanf("%f", &r);
    scanf("%f", &t);
    v = phi * r * r * t;
    l = 2 * phi * r * (r + t);
    k = 2 * phi * r;
    printf("Volume = %.2lf\n", v);
    printf("Luas = %.2lf\n", l);
    printf("Keliling = %.2lf\n\n", k);
    scanf("%f %f", &r1, &t1);
    v1 = phi * r1 * r1 * t1;
    l1 = 2 * phi * r1 * (r1 + t1);
    k1 = 2 * phi * r1;
    printf("Volume = %.2lf\n", v1);
    printf("Luas = %.2lf\n", l1);
    printf("Keliling = %.2lf", k1);
    return 0;
}
