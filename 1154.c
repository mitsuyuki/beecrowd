#include<stdio.h>

int main()
{
	double x=1,soma=0,cont=0;
	
	while(x>=0)
	{
		scanf("%lf",&x);
		if(x<0)
			printf("%.2lf\n",soma/cont);
		else
		{
			soma+=x;
			cont++;
		}
	}
}