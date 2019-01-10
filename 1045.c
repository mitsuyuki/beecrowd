#include<stdio.h>

int main()
{
	double a,b,c,d,e,f;
	while(scanf("%lf %lf %lf",&a,&b,&c) !=EOF)
	{
		if(a<=b && b<=c)
		{
			d=c;
			e=b;
			f=a;
		}
		else if(c<=a && b<=c)
		{
			d=a;
			e=c;
			f=b;
		}
		else if(c<=a && a<=b)
		{
			d=b;
			e=a;
			f=c;
		}
		else if(a<=c && c<=b)
		{
			d=b;
			e=c;
			f=a;
		}
		else if(b<=a && a<=c)
		{
			d=c;
			e=a;
			f=b;
		}
		else if(c<=b && b<=a)
		{
			d=a;
			e=b;
			f=c;
		}
		if(d>=(e+f))
		{
			printf("NAO FORMA TRIANGULO\n");
			break;
		}
		if((d*d)==(e*e)+(f*f))
		printf("TRIANGULO RETANGULO\n");
		if((d*d)>(e*e)+(f*f))
		printf("TRIANGULO OBTUSANGULO\n");
		if((d*d)<(e*e)+(f*f))
		printf("TRIANGULO ACUTANGULO\n");
		if(d==e && d==f)
		{
			printf("TRIANGULO EQUILATERO\n");
			break;
		}
		if(d==e || e==f || d==f)
		printf("TRIANGULO ISOSCELES\n");
	}

}