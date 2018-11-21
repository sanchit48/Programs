#include <stdio.h>
void main ()
{
int a,b,i,sum=0;           //a,b ko hmne scan kia to value fix i a p depend vo bhi fix sum not defined to garbage value
printf("Enter Any Two Numbers\n");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
	{
		//sum=sum+i*i;   //sum of squares
		sum=sum+i;	//sum
	}

printf("sum of no between them=%d\n",sum);
}
