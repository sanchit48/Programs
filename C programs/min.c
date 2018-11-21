#include <stdio.h>
void main ()
{
int a,b,min;
printf("enter any two numbers\n");
scanf("%d%d",&a,&b);
min= (b<a)?b:a;
printf("minimum of the two numbers is=%d\n",min);
}
