#include <stdio.h>						
void main ()
{
int a[2][2],b[2][2],c[2][2];
int i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		printf("a[%d][%d]=\t",i+1,j+1);
		scanf("%d",&a[i][j]);
		if (j==1)
		printf("\n");
	}	
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		printf("b[%d][%d]=\t",i+1,j+1);
		scanf("%d",&b[i][j]);
		if (j==1)
		printf("\n");
	}
for(i=0;i<1;i++)
for(j=0;j<2;j++)
	{
		c[i][j]=a[i][j]*b[i][j]+a[i][j]*b[i+1][j];
	}
for(i=1;i<2;i++)
for(j=0;j<2;j++)
	{	
		if(i!=j)
		{
			c[i][j]=a[i][j]*b[i-1][j]+a[i][j]*b[i][j];
		}
		else
		{
			c[i][j]=a[i][j]*b[i-1][j]+a[i][j]*b[i][j];
	
		}
	}
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{	
		printf("c[%d][%d]=",i+1,j+1);   //go from left to right now to nesxt printf line left to write
		printf("%d\t",c[i][j]);      
		if (j==1)
		printf("\n");
	}
}

