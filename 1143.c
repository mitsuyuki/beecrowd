#include<stdio.h>

int main()
{
	int a,i,c=1,d=1;
	
	while(scanf("%d",&a)!=EOF)
	{
		for(i=1;i<=a;++i)
		{
			c=(i*i);
			d=(i*i*i);
			printf("%d %d %d\n",i,c,d);
		}
	}
	return 0;
}