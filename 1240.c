#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,x,dif;
	char a[50],b[50];
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%s %s",a,b);
			if(strlen(a)<strlen(b))
				printf("nao encaixa\n");
			else
			{
				dif=strlen(a)-strlen(b);
				for(x=strlen(a);x>=dif;x--)
				{
					if(a[x]!=b[x-dif])
					{
						printf("nao encaixa\n");
						break;
					}
					if(x==dif && a[x]==b[x-dif])
						printf("encaixa\n");
				}
				
			}
		}
	}
	return 0;
}