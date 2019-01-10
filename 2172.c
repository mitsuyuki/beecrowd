#include<stdio.h>

int main()
{
	long long int x=1,m=1;
	
	while(x!=0 || m!=0 )
	{
		scanf("%lld %lld",&x,&m);
	//	printf("%Lf %Lf",x,m);
		if(x==0 && m==0)
		break;
		printf("%lld\n",m*x);
	}
	return 0;
}