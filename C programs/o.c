#include <stdio.h>
void main ()
{
int a,b,c,d,e,n,sum;
printf("enter number \n");
scanf("%d",&n);
e=n%10;
n/10;
d=n%10;
n/10;
c=n%10;
n/10;
b=n%10;
n/10;
a=n%10;
sum=a+b+c+d+e;
printf("answer is = %d\n",sum);
}
