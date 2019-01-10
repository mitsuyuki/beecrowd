#include<stdio.h>

main()
{
	double a,b,c,tri,cir,tra,qua,ret,pi=3.14159;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
	{
		tri=(a*c)/2.0;
		cir=pi*(c*c);
		tra=((a+b)*c)/2;
		qua=b*b;
		ret=a*b;
		printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,qua,ret);
	}
	return 0;
}