#include<stdio.h>

int main()
{
	int r1,r2,n;
	
	while(scanf("%d",&n)!=EOF)
	{
		while(n>0)
		{
			scanf("%d %d",&r1,&r2);
			printf("%d\n",r1+r2);
			--n;
		}
	}
	return 0;
}