#include<stdio.h>
#include<math.h>

int main()
{
	long long int n,v,i,res;
	
	while(scanf("%lld",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lld",&v);
			res=(pow(2,v)/12000);
			printf("%lld kg\n",res);
		}
	}
	return 0;
}