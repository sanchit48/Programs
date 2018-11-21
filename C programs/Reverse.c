#include <stdio.h>
void main ()
{
int a,b,c,d,e,num,answer;
printf("Enter A Five Digit Number\n");
scanf("%d",&num);
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
num=num/10;
d=num%10;
num=num/10;
e=num%10;
answer=(e*1)+(d*10)+(c*100)+(b*1000)+(a*10000);
printf("Reverse Is = %d\n",answer);
}
