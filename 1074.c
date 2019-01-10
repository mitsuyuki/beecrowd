#include<stdio.h>

int main()
{
	int n,i,p[10000],in=0,out=0;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
		}
		for(i=0;i<n;i++)
		{
			if(p[i]==0)
			{
				printf("NULL\n");
			}
			if(p[i]%2==0 && p[i]<0)
			printf("EVEN NEGATIVE\n");
			if(p[i]%2==0 && p[i]>0)
			printf("EVEN POSITIVE\n");
			if(p[i]%2==-1 && p[i]<0)
			printf("ODD NEGATIVE\n");
			if(p[i]%2==1 &&p[i]>0)
			printf("ODD POSITIVE\n");
		}
	}
	return 0;
}