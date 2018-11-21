#include <stdio.h>
void main ()
{
int a,b,n,i,answer,sum=0;
scanf("%d%d",&a,&b);
for(i=0;i<b/a;i++)	
	{	
		//if(sum<b)
		sum=sum+a;
	}

answer=b-sum;
printf("%d\n",answer);
}
