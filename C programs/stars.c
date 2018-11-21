#include <stdio.h>
void main ()
{
int num,i,j,num2;
printf("enter any number\n");
scanf("%d",&num);;
num2 = num;
for(i=0;i<num;i++)
	{       
		for(j=num2;j>0;j--)
		{ 
			printf("*");        //first it will complete inside for loop for all the values of j
		}
		printf("\n");
		num2 = num2 - 1;
	}
}
