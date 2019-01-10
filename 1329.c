#include<stdio.h>

int main()
{
	int n,x[100000],i,j,m;
	
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		j=m=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
			if(x[i]==0)
				m++;
			else
				j++;
		}
		printf("Mary won %d times and John won %d times\n",m,j);		
	}
	return 0;
}