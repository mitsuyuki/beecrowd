#include<stdio.h>

int main()
{
	long long int x,soma;
	int n,i,y;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		soma=0;
		scanf("%lld",&x);
		if(x==1)
		{
			printf("%lld nao eh perfeito\n",x);
			continue;
		}
		for(y=1;y<x;y++)
		{
			if(x%y==0)
				soma+=y;
		}
		if(soma==x)
			printf("%lld eh perfeito\n",x);
		else
			printf("%lld nao eh perfeito\n",x);
	}
	return 0;
}