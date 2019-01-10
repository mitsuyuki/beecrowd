#include<stdio.h>

int main()
{
	int a,b,i,k=1;
	
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		for(i=1;i<=b;i++)
		{
			if(k==a)
			{
				printf("%d\n",i);
				k=1;
			}
			else
			{
				printf("%d ",i);
				++k;
			}
		}
	}
	return 0;
}