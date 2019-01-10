#include <stdio.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		if (n==i && n==1)
		printf("Ho");
		else if(i==n)
		printf("Ho");
		else
		printf("Ho ");
	}
	printf("!\n");
	return 0;
}