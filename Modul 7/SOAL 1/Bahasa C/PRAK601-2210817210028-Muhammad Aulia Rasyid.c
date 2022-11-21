#include<stdio.h>
int main(void)
{
    int mat[10][10],i,j,x,y;
    scanf("%d %d", &x, &y);
    for(i=0;i<x;i++)
    for(j=0;j<y;j++)
    {
    scanf("%d",&mat[i][j]);
    }
printf("\n");
    for(i=0;i<x;i++)
    {
    for(j=0;j<y;j++)
    {
      printf("%d ",mat[i][j]);
    }
    printf("\n");
    }
}
