#include <stdio.h>
void main ()
{
int a,b,c,d,max;
printf("Enter Any Four Numbers\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=(b>a)?b:a;
max=(max>c)?max:c;
max=(max>d)?max:d;
printf("Maximum Of The Given Numbers is = %d\n",max);
}
