#include <stdio.h>						
void main ()
{
int a[3][2],b[3][2],c[3][2];
int i,j;
for(i=0;i<3;i++)
for(j=0;j<2;j++)
	{
		printf("a[%d][%d]=",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
for(i=0;i<3;i++)
for(j=0;j<2;j++)
	{
		printf("b[%d][%d]=",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
for(i=0;i<3;i++)
for(j=0;j<2;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
printf("sum of first row elements\n");
for(i=0;i<1;i++)
for(j=0;j<2;j++)
	{
		printf("%d\n",c[i][j]);
	}
}

