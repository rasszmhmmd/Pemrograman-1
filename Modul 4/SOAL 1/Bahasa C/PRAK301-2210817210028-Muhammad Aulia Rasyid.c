#include <stdio.h>
int main ()
{
  int x, y, i;
  i = 1; while (i <=3 )
  {scanf("%d %d", &x, &y);
  if (x <= y ){printf("%d %d\n",x,y);}
  else{printf("%d %d\n",y,x);}
  i++;
  }
  return 0;
}
