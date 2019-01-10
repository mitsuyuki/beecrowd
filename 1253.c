#include<stdio.h>
#include<string.h>

int main()
{
	char nome[51];
	int i,n,tanto,x;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",nome);
		scanf("%d",&tanto);
	//	printf("%s %d",nome,tanto);
		for(x=0;x<=strlen(nome)-1;x++)
		{
			nome[x]-=tanto;
			if(nome[x]<65)
				nome[x]+=26;
		}
		printf("%s\n",nome);
	}
	return 0;
}