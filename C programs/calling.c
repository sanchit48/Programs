#include <stdio.h>
void italy();
void brazil();
void argentina();
void main()
{
	printf("i am in main\n");
	brazil();
	printf("i am back in main\n");
}
brazil()
{
	printf("i am in brazil\n");
	italy();
	printf("i am back in italy\n");
}
italy()
{
	printf("i am in italy\n");
	argentina();
}
argentina()
{
	printf("i am in argentina\n");
}
