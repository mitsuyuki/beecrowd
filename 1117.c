#include<stdio.h>

int main()
{
	int i=0;
	float a,media=0,soma;
	
	while(i<2)
	{
		scanf("%f",&a);
		if(a>=0 && a<=10.0)
		{
			soma+=a;
			++i;
		}
		else
		{
			printf("nota invalida\n");
		}
	}
	media=soma/2;
	printf("media = %.2f\n",media);
	return 0;
}