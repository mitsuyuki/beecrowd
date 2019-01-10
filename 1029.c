#include <stdio.h>

int num=0;
int fib(int x)
{
	++num;
	if(x==1)
		return 1;
	else if (x==0)
		return 0;
	else
		return fib(x-1)+fib(x-2);
}
int main()
{
	int n,x,i;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;++i)
		{
			scanf("%d",&x);
			printf("fib(%d) = %d calls = %d\n",x,num-1,fib(x));
			num=0;
		}
	}
	return 0;
}