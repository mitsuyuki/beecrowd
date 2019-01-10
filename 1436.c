#include<stdio.h>

int main()
{
	int n,i,v[50],x,j,med;
	
	while(scanf("%d",&n)!=EOF)
	{
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(j=0;j<x;j++)
		{
			scanf("%d",&v[j]);
		}
		med=(x+1)/2;
		//for(i=0;i<x;i++)
		printf("Case %d: %d\n",i+1,v[med-1]);
	}
	}
	return 0;
}