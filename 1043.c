#include<stdio.h>

main()
{
	float a,b,c,p,area;
	while(scanf("%f %f %f",&a,&b,&c)!=EOF)
	{
		if(a>0 && b>0 && c>0 && a<b+c && b<a+c && c<a+b)
		{
			p=a+b+c;
			printf("Perimetro = %.1f\n",p);
		}
		else
		{
			area=((a+b)*c)/2;
			printf("Area = %.1f\n",area);
		}
	}
	return 0;
}