#include <stdio.h>
void main ()
{
int i,j,num;
printf("Enter A Number\n");
scanf("%d",&num);
j=0;
for(i=2;i<num;i++)
{
	if(num%i==0)      //in the inside of the loop it will try all the values of i then it will fucking go to if and else if
	j=j++;
}

	if(j==0)
	{ 
		printf("prime number\n");
	}
	else if(j!=0)
	{
		printf("not a prime number\n");
	}

}
