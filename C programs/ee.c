#include <stdio.h>
void main ()
{
int a[2][3],b[2][3],c[2][3];
int i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
	printf("a[%d][%d]=",i+1,j+1);
	scanf("%d",&a[i][j]);
}
}