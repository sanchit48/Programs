#include <stdio.h>
void main ()
	{
	int a,b,c;
	printf("Enter Any Three Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{ 
  		if(a<c)   printf("minimum is = %d\n",a);
  		else      printf("minimum is = %d\n",c);
	}

	else if (b<c)
	{	
  		if(b<a)   printf("minimum is = %d\n",b);
  		else      printf("minimum is = %d\n",a);
	}

	else if (a<c)
	{
  		if(a<b)   printf("minimum is = %d\n",a);
  		else      printf("minimum is = %d\n",b);
	}
	}
