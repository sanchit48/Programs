#include <stdio.h>
void main ()
{
int a,b,c,d,e,sum,num;
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
sum=a+b+c+d+e;
printf("sum of the given digits is =%d\n",sum);
}



 
