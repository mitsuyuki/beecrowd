#include<stdio.h>

int main()
{
	int i;
	double m[100];
	
	scanf("%lf",&m[0]);
	printf("N[0] = %.4f\n",m[0]);
	for(i=1;i<100;i++)
	{
		m[i]=m[i-1]/2.0;
		printf("N[%d] = %.4f\n",i,m[i]);
	}
	return 0;
}