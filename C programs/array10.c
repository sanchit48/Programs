#include <stdio.h>
int fun1();
void main()
{
	int a;
	a = fun1();

	printf("a=%d\n", a);
}
int fun1()
{
	return 1;
}