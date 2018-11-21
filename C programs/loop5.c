#include <stdio.h>
void main ()
{
int i,j,k,sum,num;
printf("Enter A Number Between 0-10\n");
scanf("%d",&num);
//sum=i+j+k;
for(i=1;i<num;i++)
	{
		for(j=1;j<num;j++)
			{
				for(k=1;k<num;k++)
					{	
						sum=i+j+k;
	 					if (sum==num)
						printf("(%d,%d,%d)\n",i,j,k);   //would work as inside third loop sum is defined
					}					
			}
	}
} 


