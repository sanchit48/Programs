#include <stdio.h>
void main ()
{
float x,y,t;
printf("Enter Two Numbers\n");
scanf("%f%f",&x,&y);
printf(" we got x=%.2f and y=%.2f\n",x,y);
t=x;
x=y;
y=t;
printf("Swapping\n Now We Have x=%.2f and y=%.2f\n",x,y);
}
