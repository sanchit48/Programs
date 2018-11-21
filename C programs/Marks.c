#include <stdio.h>
void main ()
{
int a,b,c,sum;
float percentage;
printf("Enter Your Marks \n Electronics \n Maths \n Computer\n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
percentage=sum/3;
printf("Sum Of Your Marks Is = %d\n",sum);
printf("Percentage Of Your Marks Is = %f\n",percentage);
}

