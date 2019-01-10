#include<stdio.h>

int main()
{
	long long int a,b,i,soma;
	
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
		printf("%lld\n",(((a+b)*(b-a+1))/2));
	}
	return 0;
}