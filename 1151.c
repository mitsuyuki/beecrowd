#include<stdio.h>

int Fib(int x)
{
	int fatual=0, fprox=1, fibo;
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
	int n,v,i;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			if(i==n-1)
				printf("%d\n",Fib(i));
			else
				printf("%d ",Fib(i));
		}
	}
	return 0;
}