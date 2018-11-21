#include <stdio.h>
void main ()
{
int n,r,i,j,fac1=1,fac2=1,answer;
printf("Enter n and r\n");
scanf("%d%d",&n,&r);
for(i=n;i>0;i--)
	
	{
	
		fac1=fac1*i;
	
	}		
			
for(j=r;j>0;j--)
	
	{	
				
		fac2=fac2*j;
				
	}	
			
answer=fac1/fac2;
printf("npr is %d\n",answer);
}
			
	
//Everybody Loves The Things You Do,To The Way You Talk To The Way You Move
//Everybody Here Is Watching You So That You May Feel Like Home, Its Like A Dream Come True
