#include<stdio.h>

int main()
{
	int i=1,j=7,k,l;
	
	for(k=0;k<5;k++)
	{
		for(l=0;l<=2;l++)
		{
			printf("I=%d J=%d\n",i,j);
			j--;
		}
		j+=5;
		i+=2;
	}
	return 0;
}