#include<stdio.h>
int main()
{
	int n,x,y,i,l,soma;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			soma=0;
			scanf("%d %d",&x,&y);
			if(x>y)
			{
				for(l=y+1;l<x;l++)
				{
					if(l%2==1)
					soma+=l;
				}
			}
			else
			{
				for(l=x+1;l<y;l++)
				{
					if(l%2==1)
					soma+=l;
				}
			}
			printf("%d\n",soma);
		}
	return 0;
}
}