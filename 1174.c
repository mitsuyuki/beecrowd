#include<stdio.h>

int main()
{
	float a[99];
	int i;
	
	while(scanf("%f",&a[0])!=EOF)
	{
		for(i=1;i<=99;++i)
		{
			scanf("%f",&a[i]);
		}
			for(i=0;i<=99;++i)
			{
				if(a[i]<=10)
				printf("A[%d] = %.1f\n",i,a[i]);
			}
	}
		return 0;
}