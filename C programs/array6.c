#include <stdio.h>						
void main ()
{
int a[2][2],b[2][2];
int i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		printf("a[%d][%d]=",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{	
		b[i][j]=a[j][i];
		printf("b[%d][%d]=",i+1,j+1);  //just like anwswer is
		printf("%d\n",b[i][j]);        //just like %d\n,sum
		
	}
}
