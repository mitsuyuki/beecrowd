#include<stdio.h>

int main()
{
	float a,b,r;
	
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		printf("%.2f\n",a/b);
	}
	return 0;
}