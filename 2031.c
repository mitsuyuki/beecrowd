#include<stdio.h>
#include<string.h>

int main()
{
	int x,i;
	char j1[100],j2[100];
	
		scanf("%d",&x);
		for(i=1;i<=x;i++)
		{
			scanf("%s",j1);
			scanf("%s",j2);
			if(j1[0]=='a' && j2[0]!='a')
				printf("Jogador 1 venceu\n");
			else if(j2[0]=='a' && j1[0]!='a')
				printf("Jogador 2 venceu\n");
			else if(j1[0]=='a' && j2[0]=='a')
				printf("Aniquilacao mutua\n");
			else if(j2[1]=='a' && j1[1]=='a')
				printf("Ambos venceram\n");
			else if(j1[1]=='e' && j2[1]=='a')
				printf("Jogador 1 venceu\n");
			else if(j2[1]=='e' && j1[1]=='a')
				printf("Jogador 2 venceu\n");
			else if(j1[1]=='e' && j2[1]=='e')
				printf("Sem ganhador\n");
			
		}
	return 0;
}