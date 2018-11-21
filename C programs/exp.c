#include<stdio.h>
void main()
{
int a,b,x;
printf("Enter a And b\n");
scanf("%d%d",&a,&b);
//printf("%d\n",++a);
//printf("%d\n",b++);
//printf("%d\n",b);
x=(++a)+(b++);
printf("x=%d\na=%d\nb=%d\n",x,a,b);
}
