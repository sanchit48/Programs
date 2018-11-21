#include <stdio.h>
void main ()
{
int digit;
printf("Enter A Digit Between 0-5\n");
scanf("%d",&digit);
switch (digit)
{
case 1 : printf("one\n"); 
	break;
case 2 : printf("two\n");
	break;
case 3 : printf("three\n");
	break;
case 4 : printf("four\n");
	break;
default : printf("invalid number\n");
	break;
}
}
 
