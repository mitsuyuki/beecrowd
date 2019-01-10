#include<stdio.h>

long long int Fib(int x)
{
	long long int fatual=0, fprox=1, fibo;
	if (x==0)
		return 0;
	else
	{
		while(--x>0)
		{
			fibo=fatual+fprox;
			fatual= fprox;
			fprox= fibo;
		}
		return fprox;
	}
}

int main()
{
	long long int fib[61],i;
	int n,x;
	
	for(i=0;i<61;i++)
		fib[i]=Fib(i);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		printf("Fib(%d) = %lld\n",x,fib[x]);
	}
	return 0;
}