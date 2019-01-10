#include<stdio.h>

int main()
{
	int n,i;
	float x,y,t;
	
	while((scanf("%d",&n))!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%f %f",&x, &y);
			if(y==0)
			printf("divisao impossivel\n");
			else
			{
			t=x/y;
			printf("%.1f\n",t);
			}
		}
	}
	return 0;
}