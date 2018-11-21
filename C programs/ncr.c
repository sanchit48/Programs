#include <stdio.h>
void main ()
{
int n,r,i,j,k,fac1=1,fac2=1,fac3=1,answer;
printf("Enter n And r\n");
scanf("%d%d",&n,&r);
for(i=n;i>0;i--)
	{
		fac1=fac1*i;
        }
for(j=r;j>0;j--)
	{
		fac2=fac2*j;
	}
for(k=(n-r);k>0;k--)
	{
		fac3=fac3*k;
	}
answer=fac1/(fac3*fac2);
printf("nCr is %d\n",answer);
}

		

