#include <stdio.h>
void main ()
{
int a,b,answer,rem;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
if(b>a)
	{
		answer=b/a;
		rem=b-a*answer;
	}
printf("%d\n",rem);
}						//second one 5 and 12 wont work as we wrote 5 first so it is adressed as a and 12 as b
