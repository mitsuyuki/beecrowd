#include<stdio.h>

int main()
{
	int d=0,r;
	float media=0,n,soma=0;
	
	inicio:
	while(d<2)
	{
		scanf("%f",&n);
			if(n>=0 && n<=10)
				{
					soma+=n;
					d++;
				}
			if(n<0 || n>10)
			printf("nota invalida\n");
	}
	media=soma/2.0;
	d=soma=0;
	printf("media = %.2f\n",media);
	aqui:
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d",&r);
	if (r==2)
		goto fim;
	else if(r==1)
		goto inicio;
	else if(r<1 || r>2)
		goto aqui;
		
	fim:
	return 0;
}