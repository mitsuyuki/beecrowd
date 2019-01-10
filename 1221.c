#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,y,deu=0;
	long long int x,lim;
	while(scanf("%d",&n)!=EOF)
	{
		for(y=0;y<n;y++)
		{
			deu=0;
		scanf("%lld",&x);
	//	lim=;
	//	printf("%d\n",lim);
			if(x==1 || (x%2==0 && x!=2))
			{
				printf("Not Prime\n");
				deu=1;
				continue;
			}
			if(x==2)
			{
				printf("Prime\n");
				deu=1;
				continue;
			}
		for(i=3;i<=sqrt(x);i+=2)
		{
		//	printf("entrou\n");
		/*	if(x==1)
			{
				printf("Not Prime\n");
				break;
			}
			if(x==2)
			{
				printf("Prime\n");
				break;
			}*/
			if(x%i==0)
			{
				printf("Not Prime\n");
				deu=1;
				break;
			}
		}
		if(deu==0)
		printf("Prime\n");
	}
	}
	return 0;
}