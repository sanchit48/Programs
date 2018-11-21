#include <stdio.h>
void main ()
{
int a,factorial=1;
scanf("%d",&a);
for(a=a;a>0;a=a-1)
	{
		factorial = factorial*a;
		
printf("answer is %d\n",factorial);
}
}
