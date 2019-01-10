#include<stdio.h>
#include<math.h>
main()
{
	double r,pi=3.14159,total;
	while(scanf("%lf",&r) !=EOF)
	{
		total=((4/3.0)*pi*(r*r*r));
		printf("VOLUME = %.3lf\n",total);
	}
	return 0;
}