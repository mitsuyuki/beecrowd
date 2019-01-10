#include<stdio.h>

int main()
{
	int a[9],i;
	
	while(scanf("%d",&a[0])!=EOF)
	{
		for(i=1;i<=9;++i)
		{
			a[i]=a[i-1]*2;
		}
			for(i=0;i<=9;++i)
			{
				printf("N[%d] = %d\n",i,a[i]);
			}
	}
		return 0;
}