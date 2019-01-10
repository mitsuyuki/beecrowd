#include<stdio.h>

int main()
{
	int n1;
	
	while((scanf("%d",&n1))!=EOF)
	{
		if(n1==2002)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else
		printf("Senha Invalida\n");
		}
	return 0;
}