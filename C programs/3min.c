#include <stdio.h>
void main ()
{
int a,b,c,min;
printf("Enter Any Three Numbers\n");
scanf("%d%d%d",&a,&b,&c);
min=(b<a)?b:a;
min=(min<c)?min:c;
printf("minimum Of The Three Numbers is = %d\n",min);
}
