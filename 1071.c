#include<stdio.h>

int main()
{
	int a,b,soma=0,i,m;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		if(a==b)
		printf("0\n");
		if (a<b)
		{
			for(i=a+1;i<b;i++)
			{
				if(i<0)
				{
					m=abs(i);
					if(m%2==1)
					soma+=i;
				}
				if((i%2)==1)
				soma+=i;
			}
			printf("%d\n",soma);
		}
		if(b<a)
		{
			for(i=b+1;i<a;i++)
			{
				if(i<0)
				{
					m=abs(i);
					if(m%2==1)
					soma+=i;
				}
				if((i%2==1))
				soma+=i;
			}
			printf("%d\n",soma);
		}
	soma=0;
	}
	return 0;
}