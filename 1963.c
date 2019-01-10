#include<stdio.h>

int main()
{
	double a,d,f;
	
	while ( scanf("%lf %lf",&a,&d) != EOF)
	{
		printf("%.2lf%%\n",((d/a)*100)-100);
	}
	return 0;
}