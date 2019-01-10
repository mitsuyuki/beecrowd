#include<stdio.h>

int main()
{
	int x,i,n,y,cont,soma;
	
	scanf("%d",&n);
	while(n>0)
	{
		cont=soma=0;
		scanf("%d %d",&x,&y);
		cont=y;
		if(x%2==0)
		{
			for(i=x+1;;i+=2)
			{
				if(cont==0)
					break;
				soma+=i;
				cont--;
			}
		}
		else
		{
			for(i=x;;i+=2)
			{
				if(cont==0)
					break;
				soma+=i;
				cont--;
			}
		}
		printf("%d\n",soma);
		n--;
	}
	return 0;
}