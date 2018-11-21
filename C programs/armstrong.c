#include <stdio.h>
void main ()
{ 
int i,j,k,num;
//printf("Enter A Number Between 1-500\n");
//scanf("%d",&num);
for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
			{
				for(k=1;k<10;k++)
					{       
						num=k*1+j*10+i*100;
						if((i*i*i)+(j*j*j)+(k*k*k)==num)
						printf("%d\n",num);

	                                }
			}

	}			
//printf("answer is %d\n",ijk);
}
