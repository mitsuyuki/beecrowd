#include<stdio.h>

int main()
{
	long long i,a,b,r;
	
	while (scanf("%lld %lld",&a,&b)!=EOF)
	{
		if (a==b)
		{
			printf("0\n");
		}
		if (a>b)
		{
			r=a-b;
			printf("%lld\n",r);
		}
		else if(b>a)
		{
			r=b-a;
			printf("%lld\n",r);
		}
	}
	return 0;
}