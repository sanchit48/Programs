#include <stdio.h>
void main ()
{
int a[2][2],b[2][2],c[2][2];
int i,j;
printf("Enter the elements of 1st matrix\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		printf("Enter a%d%d : ",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
printf("Enter the elements of 2nd matrix\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		printf("Enter b%d%d : ",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
printf("sum of matrix:\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{	
		if(i==0)
		if(j==0)
		printf("%d\n",c[i][j]);
		if(i==1)
		if(j==1)
		printf("%d\n",c[i][j]);
		
		
	}
}		
