#include <stdio.h>

int main()
{
	int i,n,dias=0;
	float peso;
	
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		scanf("%f",&peso);
		while(peso>1.0)
		{
			peso/=2.0;
			dias++;
		}
		printf("%d dias\n",dias);
		dias=0;
	}
	return 0;
}