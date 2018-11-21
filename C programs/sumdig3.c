#include <stdio.h>
void main ()
{
int i,num,sum=0;
printf("Enter Any Number\n");
scanf("%d",&num);
for(i=0;i<num;i++)           //wont work for very long digits
	{
		sum=sum+num%10;
		num=num/10;
	}
printf("sum of the digits is %d\n",sum);
}
