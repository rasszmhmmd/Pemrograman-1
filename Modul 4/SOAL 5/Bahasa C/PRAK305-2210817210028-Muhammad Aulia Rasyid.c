#include <stdio.h>
int main()
{
	int det, j, m, d, h, i;
	i = 1;
	while (i<=5){
	scanf("%d", &det);
	d = (det % 60);
	m = (det % 3600) / 60;
    j = (det % 86400) / 3600;
    h = (det % (86400 * 30)) / 86400;
    if (h == 0){printf("%02d:%02d:%02d",j,m,d);}
    else{printf("%d hari %02d:%02d:%02d\n",h,j,m,d);}
	i++;}
	return 0;
}