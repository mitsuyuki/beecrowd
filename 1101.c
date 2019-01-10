#include<stdio.h>

int main()
{
	int n1,n2,soma=0,i;
	
	while((scanf("%d %d",&n1,&n2))!=EOF)
	{
		if(n1<=0 || n2<=0)
		break;
		if(n2>n1)
		{
			for(i=n1;i<=n2;i++)
			{
				soma+=i;
				printf("%d ",i);
			}
		}
		if(n1>n2)
		{
			for(i=n2;i<=n1;i++)
			{
			soma+=i;
			printf("%d ",i);
			}
		}
		printf("Sum=%d\n",soma);
		soma=0;
	}
	return 0;
}