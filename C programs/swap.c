#include <stdio.h>
void main ()
{
int a,b ;
printf("Enter Two Numbers\n");
scanf("%d%d" ,&a,&b);
printf("Now a and b are = %d and %d\n",a,b);
int temp = a;
a=b;
b=temp;
printf("Now a and b are = %d and %d\n",a,b);
}
