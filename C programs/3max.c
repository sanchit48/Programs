#include <stdio.h>
void main ()
{
int a,b,c,max,min;
printf("Enter Any Three Numbers\n");
scanf("%d%d%d",&a,&b,&c);
//max=(b>a)?b:a;
//max=(max>c)?max:c;
max=((b>a)?b:a)>c?(b>a)?b:a:c;
printf("maximum Of The Three Numbers is = %d\n",max);
}
