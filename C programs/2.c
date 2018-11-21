#include <stdio.h>
void main ()
{
int a,b,i,answer=1;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
	{
       		answer=answer*a;
	}
printf("%d\n",answer);
}
