#include <stdio.h>
void main ()
{
char alphabet;
printf("Enter An Alphabet\n");
scanf("%c",&alphabet);
switch (alphabet)
{
case 'a' : printf("It Is A Vowel\n");
	break;
case 'e' : printf("It Is A Vowel\n");
	break;
case 'i' : printf("It Is A Vowel\n");
	break;
case 'o' : printf("It Is A Vowel\n");
	break;
case 'u' : printf("It Is A Vowel\n");
	break;
default :printf("It Is A Consonant\n");
	break;
}
}
