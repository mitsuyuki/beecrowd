#include<stdio.h>

int main()
{
	int a,i,x,maior=0;
	
	while(scanf("%d",&a)!=EOF)
	{
		maior=0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&x);
			if(x>maior)
				maior=x;
		}
		if (maior<10)
			printf("1\n");
		else if(maior>=10 && maior<20)
			printf("2\n");
		else
			printf("3\n");
	}
	return 0;
}