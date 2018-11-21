#include <stdio.h>
void main ()
{
int x,y;
float z,average;
printf("enter three numbers\n");
scanf ("%d%d%f" , &x,&y,&z);
average = (x+y+z)/3;
printf ("average of the three numbers is = %f\n",average);
}
