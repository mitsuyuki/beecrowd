#include <stdio.h>
#include <math.h>

int main()
{
	int x,i,g,tam;
	long int n;
	
	while(scanf("%d",&x)!=EOF)
	{
		for(i=0;i<x;++i)
		{
			scanf("%ld",&n);
			tam=sqrt(n);
			if(n==1)
			{
				printf("%ld nao eh primo\n",n);
			}
			if(n==2 || n==3)
			{
				printf("%ld eh primo\n",n);
				continue;
			}
			for(g=2;g<=tam;++g)
			{
					if(tam==g && n%g!=0)
					printf("%ld eh primo\n",n);
				if(n%g==0)
				{
					printf("%ld nao eh primo\n",n);
					break;
				}
			
			}
		}
	}
	return 0;
}