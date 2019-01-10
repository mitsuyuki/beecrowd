#include<stdio.h>

int main()
{
	int x,y,i,t,soma=0;
		scanf("%d %d",&x,&y);
		
		if(x>y)
		{
			t=y;
			y=x;
			x=t;
		}
		for (i=x;i<=y;i++)
		{
			if(i%13!=0)
			soma+=i;
		}
		printf("%d\n",soma);
		return 0;
}