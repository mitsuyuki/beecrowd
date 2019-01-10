#include<stdio.h>

int main()
{
	int x=1,i,cont=5,soma;
	
	while(x!=0)
	{
		scanf("%d",&x);
		if(x==0)
			break;
		soma=0;
		cont=5;
		if(x%2==0)
		{
			for(i=x;;i+=2)
			{
				if(cont==0)
					break;
				soma+=i;
				cont--;
			}
		}
		else
		{
			for(i=x+1;;i+=2)
			{
				if(cont==0)
					break;
				soma+=i;
				cont--;
			}
		}
		printf("%d\n",soma);
	}
	return 0;
}