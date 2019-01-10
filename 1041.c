#include<stdio.h>
main()
{
	double a, b;
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
		if(a>0 && b>0)
		printf("Q1\n");
		if(a<0 && b>0)
		printf("Q2\n");
		if(a<0 && b<0)
		printf("Q3\n");
		if(a>0 && b<0)
		printf("Q4\n");
		if(a==0 && b==0)
		printf("Origem\n");
		if(a==0 && b!=0)
		printf("Eixo Y\n");
		if(b==0 && a!=0)
		printf("Eixo X\n");
	}
		return 0;
	}