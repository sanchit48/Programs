#include <stdio.h>						
void main ()
{
int a[1][1],max;
int i,j;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
	{
		printf("a[%d][%d]=",i+1,j+1);
		scanf("%d",&a[i][j]);
	}	
//for(i=0;i<1;i++)
//for(j=0;j<2;j++)
			
		if(a[0][0]>a[0][1])
		{
			printf("max is %d\n",a[0][0]);
		}
		else if (a[0][0]<a[0][1])
		{
			printf("min is %d\n",a[0][0]);
		}
//max=(a[1][2]>a[1][1])?a[1][2]:a[1][1];
//printf("max is %d\n",max);
}
