#include <stdio.h>
void main ()
{
int a,b,max,min;
printf("Enter Any Two Different numbers\n");
scanf("%d%d",&a,&b);
max= (b>a)?b:a;
min= (b<a)?b:a;
printf("maximum of the given numbers is=%d\n",max);
printf("minimum of the given numbers is=%d\n",min);
}
