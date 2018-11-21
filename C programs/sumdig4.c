#include <stdio.h>
void main ()
{
long double i,num,sum=0;
printf("Enter Any Number\n");
scanf("%Ls",&num);
for(i=0;i<num;i++)           
	{
		sum=sum+num%10;
		num=num/10;
	}
printf("sum of the digits is %Ls\n",sum);
}
