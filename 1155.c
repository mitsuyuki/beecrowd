#include<stdio.h>

int main()
{
	double soma=0, i;
	
	for(i=1.0;i<=100.0;i++)
		soma+=(1.0/i);
	printf("%.2lf\n",soma);
	return 0;
}