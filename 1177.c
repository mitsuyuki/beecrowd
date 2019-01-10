#include<stdio.h>

int main()
{
	int n,v[1000],i,j,k;
	
	while(scanf("%d",&n)!=EOF)
	{
		j=0;
	//	for(i=0;i<n;i++)
	//	{
			while(j<1000)
			{
				for(k=0;k<n;k++)
				{
					if(j==1000)
						break;
					v[j]=k;
					j++;
				}
			}
			for(k=0;k<1000;k++)
				printf("N[%d] = %d\n",k,v[k]);
	//	}
	}
	return 0;
}