#include <stdio.h>
void main ()
{
int a[3][4];
int i,j;
for(i=0;i<3;i++)
for(j=0;j<4;j++)
	{					
		printf("a[%d][%d]\t=",i+1,j+1);		//\n k badd ane wali chizen agli line se start
		scanf("%d",&a[i][j]);
		if(j==1)
		printf("\n");
		if(j==2)
		printf("\n");
		if(j==3)
		printf("\n");
		if(j==4)
		printf("\n");
	}
}

