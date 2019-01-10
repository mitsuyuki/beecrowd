#include<stdio.h>

int main()
{
	int n,i,a[1000];
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]%2==0)
			printf("0\n");
			else
			printf("1\n");
		}
	}
	return 0;
}