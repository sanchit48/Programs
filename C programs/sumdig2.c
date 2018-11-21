#include <stdio.h>
void main ()
{
int i,a,b,c,num,sum=0;
printf("Enter A Three Digit Number\n");
scanf("%d",&num);
for(i=0;i<3;i++)
	{
		//i=num%10;	i k bare kch na likha loop k andr vrna 0=num%10 ho jata , ab jb i hata diya to for sirf teen baar chlega code
		sum=sum+num%10;
		num=num/10;
	}	
printf("Sum Of The Digits Is %d\n",sum);
}
